

/******************************************************
 
 版权信息
 AnimationLoader
 Developer  朱世伟 陈曦
 Com2us Zgame
 内部使用,外部非授权不得使用
 ************************************************
 使用方法:
 
 ZgameAnimation  *ani = new ZgameAnimation();
 ani->LoadZgameAnimation( "lvbu.dat" ,"testlvbu/");
 ani->SetScale(1,1);
 ani->SetX(400);
 ani->SetY(240);
 this->addChild(ani);
 
 *******************************************************/

#include "ZgameAnimation.h"

ZgameAnimation::ZgameAnimation(void)
:images(NULL),
/*	aniLayer(NULL),*/
frames(NULL),
actions(NULL) ,
animationCollisionArray(NULL) ,
animationAttackArray(NULL) ,
animationDefenceArray(NULL) ,
frameIndex(0) ,
actionIndex (0),
nextAction(0),
frameTime(0) ,
X (0),
Y(0) ,
scalex (1) ,
scaley(1),
playCount(0),
alreadyPlayCount(0),
isColorAddBlend(FALSE),
flagAutoDraw(FALSE),
opacity_ani(255),
color_open(FALSE),
color_r(0),
color_g(0),
color_b(0),
color_a(0),
color_model(0.0)
{
    //
}

ZgameAnimation::~ZgameAnimation(void)
{
    
}


ZgameAnimation * ZgameAnimation::create(){
    
	ZgameAnimation * pRet = new ZgameAnimation();
	pRet->autorelease();
	return pRet;
    
}

// 默认次数0的
void ZgameAnimation::SetAutoDraw(){
    this->SetAutoDraw(0);
}

// @param count 自动播放次数
void ZgameAnimation::SetAutoDraw(int count){
    flagAutoDraw = TRUE;
    
    this->playCount = count ; // 循环播放的次数 0 为无限循环
    
    schedule(schedule_selector(ZgameAnimation::tick), 0.08f);   // 回调，时间；每隔*秒执行一次
    
    this->tick(0.0);
}

//tick为间隔0.08秒之后, 更新下一帧信息
void ZgameAnimation::tick(float dt){
    //	flagDraw = True;
    DrawAction(this->X, this->Y, FALSE);
    AnimationTickManual();
    
    if (this->playCount == 0){
        return ;
    }
    
    // 记录播放次数
    if (this->IsAnimationEnd()){
        
        this->alreadyPlayCount++;
        if (this->playCount <= this->alreadyPlayCount){
            this->FreeAnimation();
        }
    }
}

void ZgameAnimation::SetOpacity(int opacity){
    opacity_ani = opacity;
}
void ZgameAnimation::SetFrameColor(float r,float g, float b, float a , float model){
    this->color_r = r;
    this->color_g = g;
    this->color_b = b;
    this->color_a = a;
    this->color_model = model;
    this->color_open = TRUE;
}
void ZgameAnimation::CleanFrameColor(){
    this->color_open = FALSE;
    
}

//此draw为重载node的draw函数, 绘制方框等调试信息需要在draw里面
void ZgameAnimation::draw()
{
#ifdef ZDEBUG
//    	if (this->flagDraw)
//    	{
//    		//ZLOG("run");
//    		DrawAction(this->X, this->Y);
//    		flagDraw = false;
//    	}
    //Zgame::SharedZgame()->SetColor(255 , 0, 0);
	//ccDrawRect(ccp(x,y),ccp(x+w , y-h));
    Zgame::SharedZgame()->DrawLine( X - 200 , Y , X +200 ,Y ,0xff0000);
    Zgame::SharedZgame()->DrawLine( X  , Y - 200, X ,Y +200 ,0xff0000);
    
	drawDebugFrame(this->actionIndex,this->frameIndex ,this->X, this->Y);
#endif
}

//---------------------画动画部分------------------------------------
/**
 * 在rotate翻转的基础上再进行roteateState翻转
 *
 * @param roteateState 需要处理的翻转操作
 * @param rotate       当前的翻转
 * @return
 */
int getRotateTypeByRotateState(int roteateState, int rotate) {
	if (roteateState == TRANS_MIRROR) {
		switch (rotate) {
            case TRANS_NONE:
                return TRANS_MIRROR;
                
            case TRANS_ROT90:
                return TRANS_MIRROR_ROT270;
                
            case TRANS_ROT180:
                return TRANS_MIRROR_ROT180;
                
            case TRANS_ROT270:
                return TRANS_MIRROR_ROT90;
                
            case TRANS_MIRROR:
                return TRANS_NONE;
                
            case TRANS_MIRROR_ROT90:
                return TRANS_ROT270;
                
            case TRANS_MIRROR_ROT180:
                return TRANS_ROT180;
                
            case TRANS_MIRROR_ROT270:
                return TRANS_ROT90;
		}
	}
	return 0;
}
/**
 * 在x,y上画指定的动作的指定帧
 *
 * @param g           Graphics 变量
 * @param actionIndex 动作索引
 * @param frameIndex  帧索引
 * @param x           X坐标
 * @param y           Y坐标
 */
void ZgameAnimation::DrawFrame(  int actionIndex, int frameIndex, int x, int y) {
	int Realframeindex;
	int RotateState;
	FrameStruct *frame_temp;
	int animationX;
	int animationY;
	string type_temp;
	int clipWidth;
	int clipHeight;
	int clipX;
	int clipY;
	int rotate;
	int imageIndex;
//	int offset_x = 0;
	int j;
    int mirror_t=0;
    
    if (actions.size() == 0){
        ZLOG("draw Frame error + %s ,actions.size() == 0\n", animationFile.c_str());
		return;
    }
    
	if (actionIndex >= actionNumber || actionIndex < 0) {
		ZLOG("draw Frame error + %s ,actionIndex >= actionNumber\n", animationFile.c_str());
		return;
	}
    
	if (frameIndex >= actions[actionIndex].frame_num || frameIndex < 0) {
		ZLOG("draw Frame error + %s , frameIndex >= actions[actionIndex].frame_num\n", animationFile.c_str());
		return;
	}
    
	Realframeindex = actions[actionIndex].actionFrame[frameIndex].index;
    // ZLOG("actions[actionIndex].actionFrame[frameIndex].index %d",Realframeindex);
    
    if( Realframeindex > frames.size() )
    {
        ZLOG("ERROR~~~~~~~~~~~~~~~ Realframeindex %d > frames.size()%ld", Realframeindex ,frames.size());
        return;
    }
    
    
	RotateState = actions[actionIndex].actionFrame[frameIndex].rotateState;
    
	frame_temp = & frames[Realframeindex];   //一帧中的元素
    
	for (j = 0; j < frames[Realframeindex].element_num ; j++) {
		animationX =  frames[Realframeindex].Element[j].animationX;
		animationY =  frames[Realframeindex].Element[j].animationY;
		if (frames[Realframeindex].Element[j].type=="Image") {
			clipX = frames[Realframeindex].Element[j].clipX;
			clipY = frames[Realframeindex].Element[j].clipY;
			clipWidth = frame_temp->Element[j].clip_width;
			clipHeight = frame_temp->Element[j].clip_height;
			rotate = frame_temp->Element[j].rotate;
			imageIndex = frame_temp->Element[j].image_index;
            mirror_t = frame_temp->Element[j].mirror;
            
            //开始处理旋转和镜像之后的位置变换
			if (RotateState == TRANS_MIRROR) {
  
                mirror_t = 1-mirror_t;  //1表示镜像，0表示正常
				//offset_x = GetOffsetX(RotateState, rotate, animationX, clipWidth, clipHeight);
				animationX = -animationX;//clipWidth-offset_x; //计算偏移值，注册点移到中心后，需要加上原切片的宽度
                
			}
            
            if (mirror_t==1) {
                rotate = 360 - rotate;
            }
            
            // 开始画
            if (images[imageIndex] == NULL){
                
                ZLOG(" image error in animation : %s", this->animationFile.c_str());
            }else{
                float scalex_t = frame_temp->Element[j].fscalex * 1.0/100 * scalex;
                float scaley_t = frame_temp->Element[j].fscaley* 1.0/100 * scaley;   //如果单个切片有缩放
                
                if (scalex_t == 0  ) {
                    scalex_t = scalex;
                }
                if (scaley_t == 0 ) {
                    scaley_t = scaley;
                }
                
                int opacity_t = frame_temp->Element[j].opacity;
                if (opacity_t == 255){
                    opacity_t = opacity_ani;
                }
                
                float offsetX = x + animationX * scalex;
                float offsetY = y + animationY * scaley;
                
                Zgame::SharedZgame()-> DrawRegion(images[imageIndex], clipX, clipY, clipWidth, clipHeight, rotate, offsetX, offsetY, scalex_t ,scaley_t, opacity_t, mirror_t, this, isColorAddBlend, color_r, color_g, color_b ,color_a, color_model, color_open);
                
            }
            
			if (ClipEdgeVisibility) {
				//setColor(clipEdgeColor);
				Zgame::SharedZgame()-> DrawRect(x + animationX* scalex  , y + animationY* scaley, clipWidth* scalex, clipHeight* scaley,ClipEdgeColor);
			}
		}
	}
    
    
}
void ZgameAnimation::SetColor(int c){
	// Zgame::sharedZgame()-> set_color(0xff0000&c , 0x00ff00&c ,0x0000ff&c );
}
 
void ZgameAnimation::drawAction(int pause){
    DrawAction(this->X, this->Y,(bool)pause);
}


void ZgameAnimation::DrawAction( int x, int y,bool pause) {
//    if (actionIndex == 14) {
//        ZLOG("ZgameAnimation::DrawAction=====start============= %s actionindex%d, frameIndex %d",animationFile.c_str(),actionIndex , frameIndex);
//
//    }
    //clean last layer
    if (this->getChildrenCount()>0){
        this->removeAllChildrenWithCleanup(false);
    }
    
    if (actions.empty())
    {
        return;
    }
    DrawFrame(actionIndex, frameIndex, x, y);
    
//    if (!pause){
//        AnimationTickManual();
//    }
	
    //ZLOG("ZgameAnimation::DrawAction=====end============");
}

void ZgameAnimation::AnimationTickManual(){
//    CCLOG("frameTime %d actionIndex %d frameIndex %d" , frameTime,actionIndex,frameIndex);
//    CCLOG("actions %d" , actions.size());
//    CCLOG("actions[actionIndex].frame_num%d",actions[actionIndex].frame_num);
    if (actions.size() <=0) {
        CCLOG("file %s actions size is %d , error " , animationFile.c_str() , (int)actions.size());
        return;
    }
    
    if (frameTime < actions[actionIndex].actionFrame[frameIndex].time_action) {
        frameTime++;
    } else
    {
        if (frameIndex < (actions[actionIndex].frame_num - 1))
        {
            frameIndex++;
            frameTime = 0;
        } else {
            
            SetAction(nextAction);
        }
    }
}

void ZgameAnimation::drawDebugFrame(int actionIndex, int frameIndex, int x, int y){
    int Realframeindex;
//	int RotateState;
//	FrameStruct *frame_temp;
//	int animationX;
//	int animationY;
	string type_temp;
//	int clipWidth;
//	int clipHeight;
//	int clipX;
//	int clipY;
//	int rotate;
//	int imageIndex;
//	int offset_x = 0;
//	int j;
//    int mirror_t=0;
    
    
	if (actionIndex >= actionNumber || actionIndex < 0) {
		//ZLOG("draw Frame error + %s\n", animationFile);
		return;
	}
    
	if (frameIndex >= actions[actionIndex].frame_num || frameIndex < 0) {
		//ZLOG("draw Frame error + %s\n", animationFile);
		return;
	}
    
	Realframeindex = actions[actionIndex].actionFrame[frameIndex].index;
    // ZLOG("actions[actionIndex].actionFrame[frameIndex].index %d",Realframeindex);
    
    if( Realframeindex > frames.size() )
    {
        ZLOG("ERROR~~~~~~~~~~~~~~~ Realframeindex %d > frames.size()%ld", Realframeindex ,frames.size());
        return;
    }
    
    //debug 画其他的框信息
#ifdef ZDEBUG
    RotateState = actions[actionIndex].actionFrame[frameIndex].rotateState;
    
	frame_temp = & frames[Realframeindex];   //一帧中的元素
    
    for (j = 0; j < frame_temp->element_num; j++) {
        animationX =  frame_temp->Element[j].animationX;
        animationY =  frame_temp->Element[j].animationY;
        type_temp = frame_temp->Element[j].type;
        if (type_temp=="Collision" ||  type_temp=="Attack"  || type_temp=="Defince" ) {   //攻击防御框
            clipWidth = frame_temp->Element[j].clip_width;
            clipHeight = frame_temp->Element[j].clip_height;
            rotate = frame_temp->Element[j].rotate;
            if (RotateState == TRANS_MIRROR) {
                offset_x = GetOffsetX(RotateState, rotate, animationX, clipWidth, clipHeight);
                animationX = -offset_x;
            }
            
            //    			if (RotateState != TRANS_NONE) {
            //    				rotate = getRotateTypeByRotateState(RotateState, rotate);
            //    			}
            
            if (CollisionVisibility){
                int cc = AttackEdgeColor;
                if ( type_temp=="Attack")
                {
                    // setColor(AttackEdgeColor);
                    cc = AttackEdgeColor;
                }
                else if ( type_temp=="Defince")
                {   //setColor(DefenceEdgeColor);
                    cc = DefenceEdgeColor;
                }
                
                Zgame::SharedZgame()-> DrawRect(x + animationX * scalex, y + animationY * scaley , clipWidth* scalex, clipHeight* scaley,cc);
            }
        }
        if (CollisionVisibility) { //碰撞区域
            //setColor(CollisionEdgeColor);
            Zgame::SharedZgame()-> DrawRect(x + animationCollisionArray[actionIndex].x * scalex, y + animationCollisionArray[actionIndex].y* scaley, animationCollisionArray[actionIndex].w* scalex, animationCollisionArray[actionIndex].h* scaley,CollisionEdgeColor);
        }
    }
#endif

}

int ZgameAnimation::IsAnimationEnd(int actionIndex, int frameIndex) {
	if (frameIndex == actions[actionIndex].frame_num -1  &&   frameTime >= actions[actionIndex].actionFrame[frameIndex].time_action-1) {
        
      //  CCLOG("IsAnimationEnd actionindex%d frameindex %d", actionIndex, frameIndex);
		return 1;
	}
	return 0;
}
int ZgameAnimation::IsAnimationEnd() {
	return IsAnimationEnd(this->actionIndex , this->frameIndex);
}

int ZgameAnimation::GetX() {
	return X;
}
int ZgameAnimation::GetY() {
	return Y;
}
void ZgameAnimation::SetX(int value) {
	X = value;
}
void ZgameAnimation::SetY(int value) {
	Y = value;
}
void ZgameAnimation::SetAction(int value) {
	if (value<actionNumber)
	{
		actionIndex = value;
		frameIndex = 0;
		frameTime = 0;
		nextAction = value;
	}else{
		CCLOG("Ani .. SetAction Error in %s， actionNumber %d", animationFile.c_str() ,actionNumber);
	}
	
}
void ZgameAnimation::SetNextAction(int value) {
	nextAction = value;
}
int ZgameAnimation::GetActionIndex() {
	return actionIndex;
}
int ZgameAnimation::GetFrameIndex() {
	return frameIndex;
}
void ZgameAnimation::SetFrameIndex(int value) {
	frameIndex = value - 1;
}
int ZgameAnimation::GetFrameTime() {
	return frameTime;
}

void ZgameAnimation::SetFrameTime(int value) {
	frameTime = value;
}

int ZgameAnimation::GetFrameOffsetX(int actionIndex, int frameIndex) {
	return actions[actionIndex].actionFrame[frameIndex].x_offset;
}

int ZgameAnimation::GetFrameOffsetY(int actionIndex, int frameIndex) {
	return actions[actionIndex].actionFrame[frameIndex].y_offset;
}
int ZgameAnimation::GetFrameOffsetX() {
	return actions[actionIndex].actionFrame[frameIndex].x_offset;
}

int ZgameAnimation::GetFrameOffsetY() {
	return actions[actionIndex].actionFrame[frameIndex].y_offset;
}


AnimationCollisionArraystruct *  ZgameAnimation::GetCurrentFrameCollisionInfo( int ActionIndex) {
	return &animationCollisionArray[ActionIndex];
}

//单帧功击框数量
int ZgameAnimation::GetCurrentFrameAttackCount(int ActionIndex, int FrameIndex) {
	return animationAttackArray[ActionIndex][FrameIndex].attack_num;
}
int ZgameAnimation::GetCurrentFrameAttackCount() {
	
	return animationAttackArray[this->actionIndex ][ this->frameIndex].attack_num;
	
}

int ZgameAnimation::GetMaxAction(){
    return actionNumber;
}
int ZgameAnimation::GetMaxFrame(int action){
    return actions[action].frame_num;
}

//获取指定帧的攻击框
RectArrayStruct*  ZgameAnimation::GetCurrentFrameAttackInfo( int ActionIndex, int FrameIndex, int index) {
	return &(animationAttackArray[ActionIndex ][FrameIndex].attackArray[index]);
}
RectArrayStruct  ZgameAnimation::GetCurrentFrameAttackInfo(  int *x , int *y , int *w , int *h  ) {
	//这里是tolua的固定多个返回值的写法
	//ZLOG("action %d ,frame %d" , actionIndex ,frameIndex);
    
	RectArrayStruct ss = animationAttackArray[actionIndex ][frameIndex].attackArray[0];
	*x = ss.x;
	*y = ss.y;
	*w = ss.w;
	*h = ss.h;
	return animationAttackArray[actionIndex ][frameIndex].attackArray[0];
}
//单帧防御框的数量
int ZgameAnimation::GetCurrentFrameDefenceCount(int ActionIndex, int FrameIndex) {
	return animationDefenceArray[ActionIndex][FrameIndex].defence_num;
}
int ZgameAnimation::GetCurrentFrameDefenceCount() {
	return animationDefenceArray[actionIndex][frameIndex].defence_num;
}
//获取指定帧的防御框
RectArrayStruct* ZgameAnimation::GetCurrentFrameDefenceInfo(int ActionIndex, int FrameIndex, int index) {
	return &(animationDefenceArray[ActionIndex][FrameIndex].defenceArray[index]);
}
RectArrayStruct ZgameAnimation::GetCurrentFrameDefenceInfo(  int *x , int *y , int *w , int *h ) {
	//这里是tolua的固定多个返回值的写法
	RectArrayStruct ss = animationDefenceArray[actionIndex ][frameIndex].defenceArray[0];
	*x = ss.x;
	*y = ss.y;
	*w = ss.w;
	*h = ss.h;
	return animationDefenceArray[actionIndex][frameIndex].defenceArray[0];
}

int ZgameAnimation::GetCurrentSpecialPointFrame(int actionIndex, int frameIndex, int *sp1, int *sp2, int *sp3) {
    //这里是tolua的固定多个返回值的写法
    *sp1 = actions[actionIndex].actionFrame[frameIndex].special_point;
    *sp2 = actions[actionIndex].actionFrame[frameIndex].special_point1;
    *sp3 = actions[actionIndex].actionFrame[frameIndex].special_point2;
    
	return actions[actionIndex].actionFrame[frameIndex].special_point;
}
int ZgameAnimation::GetCurrentSpecialPoint() {
    //这里是tolua的固定多个返回值的写法
    //    *sp1 = 0;//actions[actionIndex].actionFrame[frameIndex].special_point;
    //    *sp2 = 0;//actions[actionIndex].actionFrame[frameIndex].special_point1;
    //    *sp3 = 0;//actions[actionIndex].actionFrame[frameIndex].special_point2;
    int re = actions[actionIndex].actionFrame[frameIndex].special_point;
    // CCLOG("GetCurrentSpecialPoint %d",re);
	return re;
}
int ZgameAnimation::GetCurrentSpecialPoint1() {
    int re = actions[actionIndex].actionFrame[frameIndex].special_point1;
    // CCLOG("GetCurrentSpecialPoint1 %d",re);
	return re;
}
int ZgameAnimation::GetCurrentSpecialPoint2() {
 	int re = actions[actionIndex].actionFrame[frameIndex].special_point2;
    // CCLOG("GetCurrentSpecialPoint2 %d",re);
	return re;
}



void ZgameAnimation::SetScale( float scalexi, float scaleyi){
	scalex = scalexi ;
	scaley = scaleyi ;
//    CCLOG("ZgameAnimation::SetScale %f ,%f",scalex ,scaley);
}





/*
 * 读取动画文件
 *
 * @param filename 动画文件 cat.bat
 */

//如果图片列表为null,那么就不使用图片列表 ,  一般关卡里面的不使用, 常驻内存的使用

int  ZgameAnimation::LoadAnimation(string filename , string dir) {
    //	int i;
	byte * buff;
	int index =0;  // 数据文件数据段offset
	
    
	pathDir = dir;
	buff = Zgame::SharedZgame()->DataFileOpen(dir+filename);
	
    
    
	if(buff==NULL)
	{
		//ZLOG("load %s error",(dir+filename).c_str());
		assert(0 && "Load LoadAnimation file Error!  Look ZgameAnimation::LoadAnimation(string filename , string dir)");
		return FALSE;
	}
    
	animationFile= filename;
    
	//------------载入图片----------------------------------------
	this->imageNumber = Zgame::SharedZgame()->GetInt(buff, 0);		index+=4;
	//----------------------------------------------------
	index=  index + LoadAnimationImages( buff+index);
    
	//-------------载入frame---------------------------------------
	this->frameNumber = Zgame::SharedZgame()->GetInt(buff+index,0);		index+=4;
	index+= LoadFrams(  buff+index);
    
	//---------------载入action-----------------------------------
	this->actionNumber = Zgame::SharedZgame()->GetInt(buff+index,0);		index+=4;
    
	LoadActions(  buff+index);
    
	//-------------载入攻击防御区域-----------------------------
	SetAttackDefenceArray();
	//set_scale(1,1) ;
    
    CC_SAFE_DELETE_ARRAY(buff);
    
    return True;
}

//*********************************
//load部分相关的内部函数
//******************************
int ZgameAnimation::GetOffsetX(int roteateState, int rotate, int animationX, int clipWidth, int clipHeight) {
	if (roteateState == TRANS_MIRROR) {
        return animationX + clipWidth;
//       switch (rotate) {
//            case TRANS_NONE:
//                return animationX + clipWidth;
//            case TRANS_ROT90:
//                return animationX + clipHeight;
//            case TRANS_ROT180:
//                return animationX + clipWidth;
//            case TRANS_ROT270:
//                return animationX + clipHeight;
//            case TRANS_MIRROR:
//                return animationX + clipWidth;
//            case TRANS_MIRROR_ROT90:
//                return animationX + clipHeight;
//            case TRANS_MIRROR_ROT180:
//                return animationX + clipWidth;
//            case TRANS_MIRROR_ROT270:
//                return animationX + clipHeight;
//		}
	}
	return 0;
}
void ZgameAnimation::SetAttackDefenceArray() {
	int i,j ,k ;
    //	int x,y,w,h;
    //	int AttackCount = 0;
    //	int DefenceCount = 0;
	int AttackIndex = 0;
	int DefenceIndex = 0;
	string Att_char = "Attack";
	string Def_char = "Defince";
	string type_temp;        //是什么类型,是image,attack,还是defence
	int frame_index=0;      //对应的frame 编号
	int RotateState;       //旋转
    
	for ( i = 0; i < this->actionNumber; i++) {
		vector <AnimationAttackArraystruct> attAction;
		vector <AnimationDefenceArraystruct>defAction;
        
		for ( j = 0; j < this->actions[i].frame_num; j++) {
			AnimationAttackArraystruct attarray ;
			AnimationDefenceArraystruct  defarray ;
            
			frame_index = this->actions[i].actionFrame[j].index;   //actionframe所对应的frame
			for ( k = 0; k < this->frames[frame_index].element_num; k++) {  // actionframe所对应的frame的所有element遍历
                
				type_temp = this->frames[frame_index].Element[k].type;
				if (type_temp == Att_char) {
					RectArrayStruct  rect/*(x,y,w,h)*/ ;
					rect.x = this->frames[frame_index].Element[k].animationX;
					rect.y = this->frames[frame_index].Element[k].animationY;
					rect.w = this->frames[frame_index].Element[k].clip_width;
					rect.h = this->frames[frame_index].Element[k].clip_height;
					RotateState = this->actions[i].actionFrame[j].rotateState;
					if (RotateState == TRANS_MIRROR)
						rect.x = -
                        GetOffsetX(RotateState, this->frames[frame_index].Element[k].rotate, this->frames[frame_index].Element[k].animationX, this->frames[frame_index].Element[k].clip_width, this->frames[frame_index].Element[k].clip_height);
					AttackIndex++;
					
					attarray.attackArray.push_back(rect);
				} else if (type_temp == Def_char) {
					RectArrayStruct  rect ;
					rect.x = this->frames[frame_index].Element[k].animationX;
					rect.y = this->frames[frame_index].Element[k].animationY;
					rect.w = this->frames[frame_index].Element[k].clip_width;
					rect.h = this->frames[frame_index].Element[k].clip_height;
					RotateState = this->actions[i].actionFrame[j].rotateState;
					if (RotateState == TRANS_MIRROR)
						rect.x = -
                        GetOffsetX(RotateState, this->frames[frame_index].Element[k].rotate, this->frames[frame_index].Element[k].animationX, this->frames[frame_index].Element[k].clip_width, this->frames[frame_index].Element[k].clip_height);
					DefenceIndex++;
					
					defarray.defenceArray.push_back(rect);
				}
			}
			attarray.attack_num = AttackIndex;
			AttackIndex=0;
			defarray.defence_num = DefenceIndex;
			DefenceIndex=0;
			attAction.push_back(attarray);
			defAction.push_back(defarray);
		}
		this->animationAttackArray.push_back(attAction);
		this->animationDefenceArray.push_back(defAction);
	}
    //	ZLOG("--AttackIndex:%d,DefenceIndex:%d---\n",AttackIndex,DefenceIndex);
}
int ZgameAnimation::LoadActions(byte * buff)
{
	int i,j;
	int index_temp=0;
	int number;
    //	int x,y,w,h;
    
	for ( i = 0; i < this->actionNumber; i++) {
        //	ZLOG("==============load Actions %d================\n",i);
		number = Zgame::SharedZgame()->GetInt(buff,index_temp); index_temp+=4;
        
		AnimationCollisionArraystruct  aCAstruct;
		//加载碰撞区域
		aCAstruct.x = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
		aCAstruct.y = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
		aCAstruct.w = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
		aCAstruct.h = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
        
		//这里对齐方式不同, 需要做变换 一个是左上角0,0, cocos是左下角0,0
		
		this->animationCollisionArray.push_back(aCAstruct);
        
		//加载动作
        
		ActionFrameStruct Aframe;
		Aframe.frame_num = number;
        
		for (j = 0; j < number; j++) {
			ActionStruct  Actions ;
            
			//ZLOG("=====load action_frame %d====\n",j);
			Actions.index = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
			Actions.time_action = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
			Actions.rotateState = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
			Actions.x_offset = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
			Actions.y_offset = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
			Actions.special_point = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
            Actions.special_point1 = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
            Actions.special_point2 = Zgame::SharedZgame()->GetInt(buff, index_temp); index_temp+=4;
            //if (Actions.special_point!=0)
			//ZLOG("%d,%d,%d,%d,%d,%d, %d,%d\n",Actions.index,Actions.time_action,Actions.rotateState,Actions.x_offset,Actions.y_offset,Actions.special_point,Actions.special_point1,Actions.special_point2);
			Aframe.actionFrame.push_back(Actions);
		}
		this->actions.push_back(Aframe);
	}
	return index_temp;
}
int ZgameAnimation::LoadAnimationImages(byte * buff) {
	int i;
	string  filename;
	int length=0;
	string file_name_dir;
    
	for (i = 0; i < this->imageNumber; i++) {
		filename = Zgame::SharedZgame()->ReadUTF(buff+ length);
		length+= filename.length()+2;
        
		file_name_dir = this->pathDir;
		file_name_dir +=  string(filename);
        
		this->images.push_back(Zgame::SharedZgame()->ZLoadImage(file_name_dir.c_str()));
		//this->ImageFileName.push_back(file_name_dir);
		//ZLOG("load Images %s",file_name_dir.c_str());
	}
	return length;
}
int ZgameAnimation::LoadFrams(byte * buff) {
	int i,j;
	int elements;
	int index_temp=0;
    
	for ( i = 0; i < this->frameNumber; i++) {
        //	ZLOG("==============load frames %d================\n",i);
		elements = Zgame::SharedZgame()->GetInt(buff+index_temp,0);
		index_temp+=4;
		//创建frame
		FrameStruct frame_str;
		frame_str.Element.reserve(elements);
		frame_str.element_num = elements;
        
		for (j = 0; j < elements; j++) {
            //	ZLOG("=====load elements %d====\n",j);
			//创建frame element
			FrameElementStruct frameElementStruct ;
            
			frameElementStruct.type = Zgame::SharedZgame()->ReadUTF(buff+index_temp );
			index_temp += frameElementStruct.type.size() +2;
			frameElementStruct.animationX = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			frameElementStruct.animationY = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            
			//这里对齐方式不同, 需要做变换 一个是左上角0,0, cocos是左下角0,0
			//因为coco是左下是0,0 ,所以Y要变成负
			frameElementStruct.animationY = - frameElementStruct.animationY;
            
			frameElementStruct.clipX = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			frameElementStruct.clipY = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            
            
			frameElementStruct.clip_width = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			frameElementStruct.clip_height = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			frameElementStruct.image_index = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			frameElementStruct.rotate = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            
            frameElementStruct.mirror = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            frameElementStruct.fscalex = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            frameElementStruct.fscaley = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
            frameElementStruct.opacity = Zgame::SharedZgame()->GetInt(buff+index_temp,0); index_temp+=4;
			//ZLOG("%s,%d,%d,%d,%d,%d,%d,%d,%d\n",ani->Frames[i].Element[j].type,ani->Frames[i].Element[j].animationX,ani->Frames[i].Element[j].animationY,ani->Frames[i].Element[j].clipX,ani->Frames[i].Element[j].clipY ,ani->Frames[i].Element[j].clip_width,ani->Frames[i].Element[j].clip_height,ani->Frames[i].Element[j].image_index,ani->Frames[i].Element[j].rotate);
            
			frame_str.Element.push_back(frameElementStruct);
		}
		this->frames.push_back(frame_str);
	}
	return index_temp;
}


//--  释放系类 ----------
void  ZgameAnimation::FreeAnimation(){
	//ZLOG("-----FreeAnimation()-----------\n");
    if(flagAutoDraw ){
        unschedule(schedule_selector(ZgameAnimation::tick));   // 取消定时器
    }
    
	this->removeFromParentAndCleanup(true);
	//delete this;
}


FrameStruct::FrameStruct(){
    
}
FrameStruct::~FrameStruct(){
    //	ZLOG("Frame_struct::~Frame_struct()");
    
}
ActionFrameStruct::ActionFrameStruct(){}
ActionFrameStruct::~ActionFrameStruct(){
    //	ZLOG("Action_frame_struct::~Action_frame_struct()");
}

AnimationAttackArraystruct::AnimationAttackArraystruct(){}
AnimationAttackArraystruct::~AnimationAttackArraystruct(){
	//ZLOG("AnimationAttackArraystruct::~AnimationAttackArraystruct()");
}

AnimationDefenceArraystruct::AnimationDefenceArraystruct(){}
AnimationDefenceArraystruct::~AnimationDefenceArraystruct(){
	//ZLOG("AnimationDefenceArraystruct::~AnimationDefenceArraystruct()");
}


void ZgameAnimation::SetColorAddBlend(int flag){
    if (flag == 1)
        isColorAddBlend = TRUE;
    else
        isColorAddBlend = FALSE;
}
