#ifndef __ZGAME_ANIMATIONLOADER_H__
#define __ZGAME_ANIMATIONLOADER_H__
#include "zgame.h"

/******************************************************

版权信息
AnimationLoader
Developer  朱世伟 陈曦
Com2us Zgame
内部使用,外部非授权不得使用

*******************************************************/


//Debug

//颜色
#define ClipEdgeColor 0x0000ff 
#define CollisionEdgeColor  0xff0000
#define AttackEdgeColor 0x0000ff
#define DefenceEdgeColor  0x00ff00

//框是否可见
#ifdef ZDEBUG
#define ClipEdgeVisibility  True
#define CollisionVisibility  True              //攻击,碰撞框是否可见
#else
#define ClipEdgeVisibility  False
#define CollisionVisibility  False              //攻击,碰撞框是否可见
#endif // _DEBUG




//frame的每个元素
class FrameElementStruct{
public:

	string type;    //代表是image , 还是attack ,还是防御框等
	int animationX;
	int animationY;
	int clipX;
	int clipY;
	int clip_width;
	int clip_height;
	int image_index;  //
	int rotate;      //旋转角度
    int mirror;     //镜像
    int fscalex;      //缩放
    int fscaley;      //缩放
    int opacity;    //透明
    
};

//frame的数组,包涵几个元素
class FrameStruct{
public:
	FrameStruct();
	~FrameStruct();

	vector<FrameElementStruct> Element;
	int element_num;
};

//每帧的数据
class ActionStruct{
public:
	int index;
	int time_action;
	int rotateState;
	int x_offset;
	int y_offset;
	int special_point;
    int special_point1;
    int special_point2;

};
//动画包涵几帧
class ActionFrameStruct{
public:
	ActionFrameStruct();
	~ActionFrameStruct();

	vector<ActionStruct> actionFrame;
	int frame_num;
};

//方框的结构
class RectArrayStruct{
public:
	int x;
	int y;
	int w;
	int h;
};

//碰撞
class AnimationCollisionArraystruct{
public:
	int x;
	int y;
	int w;
	int h;
};

//攻击框--当前帧的功击框数值
class AnimationAttackArraystruct{
public:
	AnimationAttackArraystruct();
	~AnimationAttackArraystruct();

	vector<RectArrayStruct > attackArray;
	int attack_num;
};

//防御框--当前帧的防御框数值
class AnimationDefenceArraystruct{
public:
	AnimationDefenceArraystruct();
	~AnimationDefenceArraystruct();

	vector<RectArrayStruct >  defenceArray;
	int defence_num;
};






class ZgameAnimation : public CCNode
{
public:
	friend class GameObject;
	ZgameAnimation();
	~ZgameAnimation();

	static ZgameAnimation * create();
	virtual void draw();
	void tick(float dt);
	//加载和释放
	int  LoadAnimation(string filename , string dir);
	void  FreeAnimation();

	//显示帧，或者动画
	void DrawFrame(  int actionIndex, int frameIndex, int x, int y) ;
	void DrawAction( int x, int y,bool pause);

	//设置动作
	void SetNextAction(int value);
	void SetAction(int value);
	int GetActionIndex();

	//设置帧
	void SetFrameIndex(int value) ;
	void SetFrameTime(int value);
	int GetFrameIndex();
	int GetFrameTime();

  
	//播放完毕
	int IsAnimationEnd(int actionIndex, int frameIndex) ;


	//设置颜色
	void SetColor(int c);

	//帧偏移量
	int GetFrameOffsetY(int actionIndex, int frameIndex);
	int GetFrameOffsetX(int actionIndex, int frameIndex);

	//碰撞框
	AnimationCollisionArraystruct *  GetCurrentFrameCollisionInfo( int ActionIndex);

	//攻击和防御框
	RectArrayStruct * GetCurrentFrameAttackInfo(int ActionIndex, int FrameIndex, int index);
	int GetCurrentFrameAttackCount(int ActionIndex, int FrameIndex);
	RectArrayStruct * GetCurrentFrameDefenceInfo(int ActionIndex, int FrameIndex, int index);
	int GetCurrentFrameDefenceCount(int ActionIndex, int FrameIndex) ;

	//获取特别事件点
	int GetCurrentSpecialPointFrame(int actionIndex, int frameIndex, int *sp1, int *sp2, int *sp3);


    void drawDebugFrame(int actionIndex, int frameIndex, int x, int y);

	//x,y
	int GetX();
	int GetY();
	void SetX(int value);
	void SetY(int value);



	//------------------------- 暴露给lua用--------------------------
	//设置缩放
	void SetScale(float scalex , float scaley);
    //设置透明
    void SetOpacity(int opacity);
    //设置颜色替换
    void SetFrameColor(float r,float g, float b, float a, float model);
    void CleanFrameColor();
    
    void drawAction(int pause);
	//播放完毕
	int IsAnimationEnd() ;
	//帧偏移量
	int GetFrameOffsetY();
	int GetFrameOffsetX();
	//碰撞框
	AnimationCollisionArraystruct *  GetCurrentFrameCollisionInfo( );
	//攻击和防御框
	RectArrayStruct  GetCurrentFrameAttackInfo(  int *x =0, int *y =0, int *w =0, int *h =0);
	int GetCurrentFrameAttackCount();
	RectArrayStruct  GetCurrentFrameDefenceInfo(  int *x =0, int *y =0, int *w =0, int *h =0);
	int GetCurrentFrameDefenceCount() ;
	//获取特别事件点
	int GetCurrentSpecialPoint();
    int GetCurrentSpecialPoint1();
    int GetCurrentSpecialPoint2();
    
    void AnimationTickManual();    //动画播放的手动tick，就是手动控制动画的播放

    
    void SetColorAddBlend(int flag);  //设置动画颜色融合开启与否
    void SetAutoDraw() ;
    void SetAutoDraw(int count);
    
    
    int GetMaxAction();
    int GetMaxFrame(int action);


private:
	void SetAttackDefenceArray() ;
	int GetOffsetX(int roteateState, int rotate, int animationX, int clipWidth, int clipHeight);
	//加载部分
	ZgameImage * LoadImage(char * filename, char * filedir);
	int LoadAnimationImages(byte * buff);
	int LoadFrams(byte * buff);
	int LoadActions(byte * buff) ;
	//
	boolean flagAutoDraw ;      //是否自动刷新
    boolean playCount ;     // 需要循环播放次数
    boolean alreadyPlayCount ;     // 已经完成播放次数

private:
	vector<ZgameImage *> images;   //图片列表


	int imageNumber ;				//图片数量
	int frameNumber ;				//帧数量
	int actionNumber ;				//动作数量
	vector<FrameStruct> frames ;    //帧s
	vector<ActionFrameStruct> actions ;   //动作s
	string animationFile; 
	string pathDir;


	vector<AnimationCollisionArraystruct> animationCollisionArray ;  //动画的碰撞数组 
	vector< vector<AnimationAttackArraystruct> > animationAttackArray ;  //动画的攻击数组  
	vector< vector<AnimationDefenceArraystruct> > animationDefenceArray ;  //防御数组  

	int frameIndex ;		//当前帧
	int actionIndex ;		//当前动作
	int nextAction ;		//
	int frameTime ;			//停留多久
	int X ;
	int Y ;
	float scalex ;
	float scaley;
    
    int opacity_ani;
    boolean isColorAddBlend ;   //颜色加的设置
    
    boolean color_open;     //开启颜色替换功能
    float color_r ;
    float color_g ;
    float color_b ;
    float color_a ;
    float color_model ;

};


#endif 
