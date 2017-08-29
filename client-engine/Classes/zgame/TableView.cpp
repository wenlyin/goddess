//
//  TableView.cpp
//  miniDotaClient
//
//  Created by 李 兆诚 on 13-1-25.
//
//
extern "C" {
#include "lualib.h"
#include "lauxlib.h"
#include "tolua_fix.h"
}

#include "TableView.h"
#include "CCLuaEngine.h"
TableView::TableView()
: m_pIndices(NULL)
, m_pCellsUsed(NULL)
, m_pCellsFreed(NULL)
//, m_pDataSource(NULL)
, m_eOldDirection(kCCScrollViewDirectionNone)
{
    column = 1;
    row = 1;
    everyCounts = 1;
    m_nScriptTapHandler = 0;
    m_nOnClickScriptTapHandler = 0;
    isAuotMove = true;
}
TableView::~TableView()
{
    CC_SAFE_DELETE(m_pIndices);
    CC_SAFE_RELEASE(m_pCellsUsed);
    CC_SAFE_RELEASE(m_pCellsFreed);
    unregisterScriptTapHandler();
    unregisterOnClickScriptTapHandler();
}

TableView* TableView::createTableView(CCSize size)
{
    TableView *table = new TableView();


    table->setPosition(CCPointZero);
    if ( table->initWithViewSize(size, NULL)) {
        table->autorelease();
        return table;
    } else {
        CC_SAFE_DELETE(table);
        return NULL;
    }
}
/**
 最初设计机制是这样
 如果是竖直状态 如果 r小于0  则采用cell的高度
 如果水平状态 l小于0  则采用cell的宽度
 */
void TableView::setLayoutParams(int r, int l)
{
    if (r < 1) {
        r = 1;
    }
    if (l < 1) {
        l = 1;
    }
    column = l;//列
    row = r;//行
    _updateContentSize();
}

void TableView::setLayoutParamsInX(int r)
{
    setLayoutParams(r, column);
}
void TableView::setLayoutParamsInY(int l)
{
    setLayoutParams(row, l);
}
bool TableView::initWithViewSize(CCSize size, CCNode* container/* = NULL*/)
{
    
    if (CCScrollView::initWithViewSize(size, container))
    {
        m_pCellsUsed      = new CCArrayForObjectSorting();
        m_pCellsFreed     = new CCArrayForObjectSorting();
        m_pIndices        = new std::set<unsigned int>();
        m_eVordering      = tableViewFillTop;
        this->setDirection(kCCScrollViewDirectionVertical);
        
        CCScrollView::setDelegate(this);
        this->viewRect = this->boundingBox();
        return true;
    }
    return false;
}

//重要改动 加载item机制 变成多行多列
void TableView::scrollViewDidScroll(CCScrollView* view)
{
    //获取
    //    unsigned int uCountOfItems = m_pDataSource->numberOfCellsInTableView(this);
    //无论是水平还是竖直 最大索引是不变的
    //    unsigned int uCountOfItems  = m_pDataSource->numberOfCellsInTableView(this) % column == 0 ? m_pDataSource->numberOfCellsInTableView(this) / column : m_pDataSource->numberOfCellsInTableView(this) / column + 1;
    unsigned int uCountOfItems  = cellCount;
    if (0 == uCountOfItems)
    {
        return;
    }
    
    unsigned int startIdx = 0, endIdx = 0, idx = 0, maxIdx = 0;
    //    CCPoint oset = this->getContentOffset();
    //获取container的point 并都乘以-1
    CCPoint offset = ccpMult(this->getContentOffset(), -1);
    //获取加载的最大索引
    maxIdx = MAX(uCountOfItems-1, 0);
    //获取cell的size
    //    const CCSize cellSize = m_pDataSource->cellSizeForTable(this);
    
    if (m_eVordering == kCCTableViewFillTopDown)
    {
        //        offset.y = offset.y + m_tViewSize.height/this->getContainer()->getScaleY() - cellSize.height;
        offset.y = offset.y + m_tViewSize.height/this->getContainer()->getScaleY() - itemSize.height;
    }
    //由偏移量算出可视界面内最顶部的索引索引
    startIdx = this->_indexFromOffset(offset);

    if (m_eVordering == kCCTableViewFillTopDown)
    {
        offset.y -= m_tViewSize.height/this->getContainer()->getScaleY();
    }
    else
    {
        offset.y += m_tViewSize.height/this->getContainer()->getScaleY();
    }
    offset.x += m_tViewSize.width/this->getContainer()->getScaleX();
    
    endIdx   = this->_indexFromOffset(offset);
#if 0 // For Testing.
    CCObject* pObj;
    int i = 0;
    CCARRAY_FOREACH(m_pCellsUsed, pObj)
    {
        ui_tableViewCell* pCell = (ui_tableViewCell*)pObj;
        CCLog("cells Used index %d, value = %d", i, pCell->getIdx());
        i++;
    }
    CCLog("---------------------------------------");
    i = 0;
    CCARRAY_FOREACH(m_pCellsFreed, pObj)
    {
        ui_tableViewCell* pCell = (ui_tableViewCell*)pObj;
        CCLog("cells freed index %d, value = %d", i, pCell->getIdx());
        i++;
    }
    CCLog("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
#endif
    int removeCounts = 0;
    switch (this->getDirection())
    {
            //水平
        case kCCScrollViewDirectionHorizontal:
            removeCounts = row;
            break;
        default:
            //竖直
            removeCounts = column;
            break;
    }
    //向上滑动
    if (m_pCellsUsed->count() > 0)
    {
        
        CCTableViewCell* cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(0);
        
        idx = cell->getIdx() / removeCounts; //获取每一行的 起始索引
        
        //如果该索引小于顶部的索引 表明 他在可视范围外 可以移掉
        while(idx <startIdx)
        {
            //            for (int i = 0; i < removeCounts; i++) {
            
            this->_moveCellOutOfSight(cell);
            if (m_pCellsUsed->count() > 0)
            {
                //                    cell = (ui_tableViewItem*)m_pCellsUsed->objectAtIndex(0);
                cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(0);
                idx = cell->getIdx() / removeCounts;
            }
            else
            {
                break;
            }
            
            //            }
        }
    }
    //向下滑动
    if (m_pCellsUsed->count() > 0)
    {
        CCTableViewCell *cell = (CCTableViewCell*)m_pCellsUsed->lastObject();
        
        idx = cell->getIdx() / removeCounts;
        //maxIdx加载的最大索引值  endIdx当前可视界面的最大索引
        while(idx <= maxIdx && idx > endIdx)
        {
            //              for (int i = 0; i < removeCounts; i++) {
            this->_moveCellOutOfSight(cell);
            if (m_pCellsUsed->count() > 0)
            {
                cell = (CCTableViewCell*)m_pCellsUsed->lastObject();
                idx = cell->getIdx() / removeCounts;
                
            }
            else
            {
                break;
            }
            
            //              }
        }
    }
    //如果发现该id在存在列表里 并且在可视范围内就跳过  如果不再可视范围内 就要移除
    //可视范围内startIdx顶部的索引  endIdx底部的索引
    startIdx = startIdx * removeCounts;
    endIdx = (startIdx + row * column) < numberOfCells ? startIdx + row * column - 1 : numberOfCells - 1;
    if(numberOfCells > row * column)
    {
        if(endIdx + column < numberOfCells)
        {
            endIdx += column;
        }else
        {
            endIdx = numberOfCells - 1;
        }
    }
    for (unsigned int i=startIdx; i <= endIdx; i++)
    {
        //if ([m_pIndices containsIndex:i])
        if (m_pIndices->find(i) != m_pIndices->end())
        {
            continue;
        }
        //滑动之后 更新列表 判断是在可视界面内 还是外
        this->updateCellAtIndex(i);
    }
    
}

//从偏移位置 获取该item索引 这个机制是这样 每次获取每一行头的索引
unsigned int TableView::_indexFromOffset(CCPoint offset)
{
    int index = 0; //开头的索引
    const int maxIdx = numberOfCells - 1;
    if (m_eVordering == kCCTableViewFillTopDown) {
        offset.y = this->getContainer()->getContentSize().height - offset.y - itemSize.height;
    }
    
    
    index = MAX(0, this->__indexFromOffset(offset));
    index = MIN(index, maxIdx / everyCounts);
    
    return index;
}

int TableView::__indexFromOffset(CCPoint offset)
{
    int  index = 0;
    switch (this->getDirection()) {
        case kCCScrollViewDirectionHorizontal://水平
            index = offset.x/itemSize.width;
            break;
        default:
            index = offset.y/itemSize.height;
            break;
    }
    
    return index;
}


unsigned int TableView::___indexFromOffset(CCPoint offset)
{
    int index = 0; //开头的索引
    const int maxIdx = numberOfCells;// - 1;
    if (m_eVordering == kCCTableViewFillTopDown) {
        offset.y = this->getContainer()->getContentSize().height - offset.y - itemSize.height;
    }
    
    index = MAX(0, this->indexFromOffset(offset));
//    index = MIN(index, maxIdx);
    if(index > maxIdx)
    {
        index = -1;
    }
    return index;
}

int TableView::indexFromOffset(CCPoint offset)
{
    int index_x = offset.x/itemSize.width;
    int index_y = offset.y/itemSize.height;
    if (this->getDirection() == kCCScrollViewDirectionHorizontal) {
//        index_x = offset.x/itemSize.width;
//        index_y = offset.y/itemSize.height;
        return index_x * everyCounts + index_y + 1;
    } else {
//        index_x = offset.x/itemSize.width;
//        index_y = offset.y/itemSize.height;
        return index_y * everyCounts + index_x;
    }
//    switch (this->getDirection()) {
//        case kCCScrollViewDirectionHorizontal://水平
//            index_x = offset.x/itemSize.width;
//             index_y = offset.y/itemSize.height;
//            index = index_x * everyCounts + index_y + 1;
//            return index;
//            break;
//        default:
//            index_x = offset.x/itemSize.width;
//            index_y = offset.y/itemSize.height;
//            index = index_y * everyCounts + index_x;
//            return index;
//            break;
//    }
//    
//    return index;
}

void TableView::updateCellAtIndex(unsigned int idx)
{
    
    
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }
    unsigned int uCountOfItems = numberOfCells;
    if (0 == uCountOfItems || idx > uCountOfItems-1)
    {
        return;
    }
    
    CCTableViewCell* cell = this->_cellWithIndex(idx);
    if (cell)
    {
        //移除item
        this->_moveCellOutOfSight(cell);
    }
    //这个地方 是使用空闲的id 加载新的item  获取到新的cell后  对该cell进行属性添加
    //此处需要调用lua 
    cell = executeTableViewEvent(idx);
    //设置该cell的一些属性  例如在container中的位置 该cell的索引
    this->_setIndexForCell(idx, cell);
    //将该sell添加进container
    this->_addCellIfNecessary(cell);
}

void TableView::registerScriptTapHandler(LUA_FUNCTION nHandler)
{
    unregisterScriptTapHandler();
    m_nScriptTapHandler = nHandler;
    LUALOG("[LUA] Add CCMenuItem script handler: %d", m_nScriptTapHandler);
}
void TableView::unregisterScriptTapHandler()
{
    if (m_nScriptTapHandler)
    {
        CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nScriptTapHandler);
        LUALOG("[LUA] Remove CCMenuItem script handler: %d", m_nScriptTapHandler);
        m_nScriptTapHandler = 0;
    }

}

void TableView::registerOnClickScriptTapHandler(LUA_FUNCTION handler)
{
    unregisterOnClickScriptTapHandler();
    m_nOnClickScriptTapHandler = handler;
    LUALOG("[LUA] Add on click script handler: %d", m_nOnClickScriptTapHandler);
}
void TableView::unregisterOnClickScriptTapHandler()
{
    if (m_nScriptTapHandler)
    {
        CCScriptEngineManager::sharedManager()->getScriptEngine()->removeScriptHandler(m_nOnClickScriptTapHandler);
        LUALOG("[LUA] Remove on click script handler: %d", m_nOnClickScriptTapHandler);
        m_nOnClickScriptTapHandler = 0;
    }
}


CCTableViewCell* TableView::executeTableViewEvent(unsigned int idx)
{

    CCLuaStack* m_pStack = CCLuaEngine::defaultEngine()->getLuaStack();
    lua_State* m_state = m_pStack->getLuaState();
    
    m_pStack->clean();
    
    m_pStack->pushFunctionByHandler(m_nScriptTapHandler);
    m_pStack->pushInt(idx);

    int error = 0;
    error = lua_pcall(m_state, 1, 1, 0);
    if (error) {
        return NULL;
    }
    
    CCTableViewCell* tableViewCell = (CCTableViewCell*)tolua_tousertype(m_state, 1, 0);
    
    return tableViewCell;
}


void TableView::_moveCellOutOfSight(CCTableViewCell *cell)
{
    m_pCellsFreed->addObject(cell);
    m_pCellsUsed->removeSortedObject(cell);
    m_pIndices->erase(cell->getIdx());
    // [m_pIndices removeIndex:cell.idx]; 重置id  //重置id 设为-1
    cell->reset();
    if (cell->getParent() == this->getContainer()) {
        this->getContainer()->removeChild(cell, true);;
    }
}

//初始化一个新的cell后 设置该cell在容器中的位置 和其他属性
void TableView::_setIndexForCell(unsigned int index, CCTableViewCell *cell)
{
    if(cell == NULL){return;}
    cell->setAnchorPoint(ccp(0.0f, 0.0f));
//    CCLog("%f, %f, %f, %f", cell->getPosition().x, cell->getPosition().y, cell->getContentSize().width, cell->getContentSize().height);
    cell->setPosition(this->_offsetFromIndex(index));
    cell->setIdx(index);
}


//计算每个cell的坐标
CCPoint TableView::_offsetFromIndex(unsigned int index)
{
    CCPoint offset = this->__offsetFromIndex(index);
    
    //    const CCSize cellSize = m_pDataSource->cellSizeForTable(this);
    if (m_eVordering == kCCTableViewFillTopDown) {
        offset.y = this->getContainer()->getContentSize().height - offset.y - itemSize.height;
    }
    return offset;
}
////计算每个cell的坐标  index每个cell的索引
CCPoint TableView::__offsetFromIndex(unsigned int index)
{
    CCPoint offset;
  
    switch (this->getDirection()) {
        case kCCScrollViewDirectionHorizontal:
            //水平加载cell 从上到下  依次向下加载
            //            offset = ccp(itemSize.width * (index / everyCounts), itemSize.height * (everyCounts - index % everyCounts - 1));
            offset = ccp(itemSize.width * (index / everyCounts), itemSize.height * (index % everyCounts));
            //            offset = ccp(cellSize.width * index, 0.0f);
            break;
        default:
            //竖直加载 从左到右
            offset = ccp(itemSize.width * (int)(index % everyCounts), itemSize.height * (index / everyCounts));
            //            offset = ccp(0.0f, cellSize.height * index);
            break;
    }
    
    return offset;
}


//如果该cell没有添加进容器中 就会添加进容器中
void TableView::_addCellIfNecessary(CCTableViewCell * cell)
{
    if (cell == NULL){ return;};
    if (cell->getParent() != this->getContainer())
    {
        this->getContainer()->addChild(cell);
    }
    m_pCellsUsed->insertSortedObject(cell);
    m_pIndices->insert(cell->getIdx());
    // [m_pIndices addIndex:cell.idx];
}


//根据idx获取对应的item
CCTableViewCell* TableView::_cellWithIndex(unsigned int cellIndex)
{
    CCTableViewCell *found = NULL;
    if (m_pIndices->find(cellIndex) != m_pIndices->end()) {
        found = (CCTableViewCell *)m_pCellsUsed->objectWithObjectID(cellIndex);
    }
    return found;
}

//如果重新设置了布局 会重新加载item
void TableView::setVerticalFillOrder(UITableViewVerticalFillOrder fillOrder)
{
    if (m_eVordering != fillOrder) {
        m_eVordering = fillOrder;
        if (m_pCellsUsed->count() > 0) {
            this->reloadData();
        }
    }
    
}


void TableView::reloadData()
{
    CCObject* pObj = NULL;
    //先移除掉所有的cell
    CCARRAY_FOREACH(m_pCellsUsed, pObj)
    {
        CCTableViewCell* cell = (CCTableViewCell*)pObj;
        m_pCellsFreed->addObject(cell);
        cell->reset();
        if (cell->getParent() == this->getContainer())
        {
            this->getContainer()->removeChild(cell, true);
        }
    }
    m_pIndices->clear();
    m_pCellsUsed->release();
    m_pCellsUsed = new CCArrayForObjectSorting();
    
    this->_updateContentSize();
    if (numberOfCells > 0)
    {
        //对item进行渲染
        this->scrollViewDidScroll(this);
    }
    
}

void TableView::insertCellAtIndex(unsigned  int idx)
{
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }
    
    unsigned int uCountOfItems = numberOfCells;
    if (0 == uCountOfItems || idx > uCountOfItems-1)
    {
        return;
    }
    
    CCTableViewCell* cell = NULL;
    int newIdx = 0;
    cell = (CCTableViewCell*)m_pCellsUsed->objectWithObjectID(idx);
    //重新插入后 后面的所有id都递增
    if (cell)
    {
        newIdx = m_pCellsUsed->indexOfSortedObject(cell);
        for (unsigned int i=newIdx; i<m_pCellsUsed->count(); i++)
        {
            cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(i);
            
            this->_setIndexForCell(cell->getIdx()+1, cell);
        }
    }
    
    
    cell = executeTableViewEvent(idx);
    this->_setIndexForCell(idx, cell);
    this->_addCellIfNecessary(cell);
    
    this->_updateContentSize();
}

void TableView::removeCellAtIndex(unsigned int idx)
{
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }
    
    unsigned int uCountOfItems = numberOfCells;
    if (0 == uCountOfItems || idx > uCountOfItems-1)
    {
        return;
    }
    
    CCTableViewCell* cell = NULL;
    unsigned int newIdx = 0;
    cell = this->_cellWithIndex(idx);
    if (!cell) {
        return;
    }
    
    newIdx = m_pCellsUsed->indexOfSortedObject(cell);
    
    //remove first
    this->_moveCellOutOfSight(cell);
    m_pIndices->erase(idx);
    //所有idx后面的都要递减
    for (unsigned int i=m_pCellsUsed->count()-1; i > newIdx; i--) {
        cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(i);
        this->_setIndexForCell(cell->getIdx()-1, cell);
    }
    
}

CCTableViewCell *TableView::dequeueCell()
{
    CCTableViewCell *cell;
    
    if (m_pCellsFreed->count() == 0) {
        cell = NULL;
    } else {
        cell = (CCTableViewCell*)m_pCellsFreed->objectAtIndex(0);
        cell->retain();
        m_pCellsFreed->removeObjectAtIndex(0);
        cell->autorelease();
    }
    return cell;
    
}

CCTableViewCell *TableView::cellAtIndex(unsigned int idx)
{
    return this->_cellWithIndex(idx);
}


UITableViewVerticalFillOrder TableView::getVerticalFillOrder()
{
    return m_eVordering;
}


/**
 这个是设置布局 设置完布局后 要考虑怎样加载item
 */
//更新内容 重置size大小  重要改动  变成多行多列的形式
void TableView::_updateContentSize()
{
    CCSize     size, cellSize;
    
    
    
    //获取cell的大小 这里将决定container的大小
    //    cellSize  = m_pDataSource->cellSizeForTable(this);
    //获取cell的数量 要根据 r l 一次进行排列
    
    
    switch (this->getDirection())
    {
            //水平
        case kCCScrollViewDirectionHorizontal:
            everyCounts = row;
            
            cellCount = numberOfCells % row == 0 ? numberOfCells / row : numberOfCells / row + 1;
            
            
            
            
            //采取占位符的形式 设置高度大小
            cellSize.height = getViewSize().height / row;
            //设置宽度
//            if (column < 0) {
//                cellSize.width = m_pDataSource->cellSizeForTable(this).width;
//            } else {
                cellSize.width = getViewSize().width / column;
//            }
            itemSize = CCSize(cellSize.width, cellSize.height);
            size = CCSizeMake(cellCount * cellSize.width, getViewSize().height);
            break;
        default:
            cellCount = numberOfCells % column == 0 ? numberOfCells / column : numberOfCells / column + 1;
            everyCounts = column;
            
            
            
            //竖直
//            if (row < 0) {
//                cellSize.height = m_pDataSource->cellSizeForTable(this).height;
//            } else {
                cellSize.height  = getViewSize().height / row;
//            }
            cellSize.width = getViewSize().width / column;
            itemSize = CCSize(cellSize.width, cellSize.height);
            size = CCSizeMake(getViewSize().width, cellCount * cellSize.height);
            //最后算出总长度
            break;
    }
    
    this->setContentSize(size);
    
	if (m_eOldDirection != m_eDirection)
	{
		if (m_eDirection == kCCScrollViewDirectionHorizontal)
		{
			this->setContentOffset(ccp(0,0));
		}
		else
		{
			this->setContentOffset(ccp(0,this->minContainerOffset().y));
		}
		m_eOldDirection = m_eDirection;
	}
    
}


bool TableView::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
    //在这里对包含的cell进行touch分发
    //    CCObject* obj;
    //    CCARRAY_FOREACH(m_pCellsUsed, obj)
    //    {
    //        //要判断该触摸点是否在该object范围内
    //        ((ui_base*)obj)->ccTouchBegan(pTouch, pEvent);
    //    }
    //CCLog("-----触摸开始---%s", __FUNCTION__);
//    time_t time1;
//    time(&time1);
//    double now = time1;
//    CCLOG("时间戳:%f",now);
    clock_t start,ends;
    start=clock();
    ends=clock();
    CCLog("--时间差-- = %f", (float)ends - (float)start);
    
    

    if (!this->isVisible()) {
        return false;
    }
    
    bool touchResult = CCScrollView::ccTouchBegan(pTouch, pEvent);
        
    if (pTouch && this->viewRect.containsPoint(this->convertTouchToNodeSpace(pTouch))) {
        int        index;
        CCTableViewCell   *cell;
        CCPoint           point;
        
        point = this->getContainer()->convertTouchToNodeSpace(pTouch);
        if (m_eVordering == kCCTableViewFillTopDown) {
            //                CCSize cellSize = m_pDataSource->cellSizeForTable(this);
            point.y -= itemSize.height;
        }
        //根据触摸的点 除以cell的大小 得出索引
        index = this->___indexFromOffset(point);
        CCLOG("----index = %d", index);
        if(index >= -1)
        {
//            cell  = this->_cellWithIndex(index-1);
            cell  = this->_cellWithIndex(index);
            
            if(cell == NULL){
                cell  = this->_cellWithIndex(index-1);
            }
//           if (cell ) {
                CCLog("cell ccTouchBegan index = %d, (cell==NULL) = %d", index, cell==NULL);
                CCLuaEngine * m_engine = (CCLuaEngine*)CCScriptEngineManager::sharedManager()->getScriptEngine();
                if(m_engine && kScriptTypeNone != m_eScriptType && m_nOnClickScriptTapHandler != 0)
                {
//                    do
//                   {
//                        CC_BREAK_IF(0 == m_nOnClickScriptTapHandler);
                        m_engine->getLuaStack()->clean();
                        m_engine->getLuaStack()->pushInt(CCTOUCHBEGAN);
                        m_engine->getLuaStack()->pushInt(index);
                        m_engine->getLuaStack()->pushCCObject(cell, "CCTableViewCell");
                        m_engine->getLuaStack()->executeFunctionByHandler(m_nOnClickScriptTapHandler, 3);
//                    } while (0);
                }
//            }
        }
    }
    
    return touchResult;
}

//是否有移动
bool TableView::isMoved(){
    return this->m_bTouchMoved;
}
//
//// optional
//void TableView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
//{
//    CCScrollView::ccTouchMoved(pTouch, pEvent);
//}


void TableView::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
    //CCLog("*********触摸结束---%s", __FUNCTION__);
    if (!this->isVisible()) {
        return;
    }
    //if (m_pTouches->count() == 1) { //&& this->isTouchMoved()
    if (m_pTouches->count() == 1) {
        int        index;
        CCTableViewCell   *cell;
        CCPoint           point;

        point = this->getContainer()->convertTouchToNodeSpace(pTouch);
        if (m_eVordering == kCCTableViewFillTopDown) {
//          CCSize cellSize = m_pDataSource->cellSizeForTable(this);
            point.y -= itemSize.height;
        }
        //根据触摸的点 除以cell的大小 得出索引
        index = this->___indexFromOffset(point);
        CCLOG("*********index = %d", index);
        if(index >= -1)
        {
            cell  = this->_cellWithIndex(index);
            
            if(cell==NULL){
                cell  = this->_cellWithIndex(index-1);
            }
            //CCLOG("*********(cell == NULL) = %d", cell == NULL);
            //if (cell) {
                CCLuaEngine * m_engine = (CCLuaEngine*)CCScriptEngineManager::sharedManager()->getScriptEngine();
                if(m_engine && kScriptTypeNone != m_eScriptType && m_nOnClickScriptTapHandler != 0)
                {
                    //CCLog("*******m_engine && kScriptTypeNone != m_eScriptType && m_nOnClickScriptTapHandler != 0");
//                    do
//                    {
//                        CC_BREAK_IF(0 == m_nOnClickScriptTapHandler);
                        m_engine->getLuaStack()->clean();
                        m_engine->getLuaStack()->pushInt(CCTOUCHENDED);
                        m_engine->getLuaStack()->pushInt(index);
//                            m_engine->getLuaStack()->pushCCObject(cell, "CCTableViewCell");
                        //添加移动参数值
                        if(this->isTouchMoved()){
                            //CCLog("*******%s----this->isTouchMoved()", __FUNCTION__);
                            m_engine->getLuaStack()->pushInt(1);
                            CCPoint offset = this->getContentOffset();
                            m_engine->getLuaStack()->pushInt(offset.x);
                            m_engine->getLuaStack()->pushInt(offset.y);
                        }else{
                            //CCLog("*******%s----no--TouchMoved()", __FUNCTION__);
                            m_engine->getLuaStack()->pushInt(0);
                            m_engine->getLuaStack()->pushInt(0);
                            m_engine->getLuaStack()->pushInt(0);
                        }
                        
                        m_engine->getLuaStack()->executeFunctionByHandler(m_nOnClickScriptTapHandler, 5);
//                    } while (0);
                }
           // }
        }
    }

    if(isAuotMove){
         CCScrollView::ccTouchEnded(pTouch, pEvent);
    }
    else{
        if (m_pTouches->containsObject(pTouch))
        {
            //        if (m_pTouches->count() == 1 && m_bTouchMoved)
            //        {
            //            this->schedule(schedule_selector(CCScrollView::deaccelerateScrolling));
            //        }
            m_pTouches->removeObject(pTouch);
        }
    
        //if (m_pTouches->count() == 0)
        {
            m_bDragging = false;
            m_bTouchMoved = false;
        }
        CCScrollView::ccTouchEnded(pTouch, pEvent);
    }
}

void TableView::setIsAutoMove(bool value){
    isAuotMove = value;
}


//
//CCSize TableView::cellSizeForTable(ui_tableView *table)
//{
//    
//    return CCSizeMake(60, 120);
//}
//CCTableViewCell* TableView::tableCellAtIndex(ui_tableView *table, unsigned int idx)
//{
//    static int m = 0, n = 0;
//    
//    
//    CCString *string = CCString::createWithFormat("%d", idx);
//    ui_tableViewItem *cell = table->dequeueCell();
//    
//    if (!cell) {
//        cell = new ui_customTableViewItem();
//        cell->autorelease();
//        CCLayerColor* color = CCLayerColor::create(ccc4(0, 0, 125, 250), 60, 60);
//        //        color->setPosition(CCPointZero);
//        cell->addChild(color);
//        
//        
//        
//        
//    }
//    else
//    {
//        CCLog("-------nnnnnnnnnn------>%d",  n++);
//        CCLabelTTF *label = (CCLabelTTF*)cell->getChildByTag(123);
//        label->setString(string->getCString());
//    }
//    CCLog("---->%f, %f", table->getPosition().x , table->getPosition().y);
//    
//    return cell;
//}
 void TableView::setNumberOfCellsInTableView(int counts)
{
    numberOfCells = counts;
}
