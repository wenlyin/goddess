//
//  TableView.h
//  miniDotaClient
//
//  Created by 李 兆诚 on 13-1-25.
//
//

#ifndef __miniDotaClient__TableView__
#define __miniDotaClient__TableView__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"
/**
 
 */
USING_NS_CC;
USING_NS_CC_EXT;

//当tableview为竖屏的时候 设置填充item的方向
typedef enum {
    tableViewFillTop,
    tableViewFillBottomUp
} UITableViewVerticalFillOrder;

class TableView:  public CCScrollView, public CCScrollViewDelegate
{
public:
    TableView();
    virtual ~TableView();
    
    static TableView* createTableView(CCSize size);
    
    bool initWithViewSize(CCSize size, CCNode* container = NULL);
    
    //设置布局 类似于一个可视界面内 几行几列 默认是4X1
    void setLayoutParams(int r = 4, int l = 1);
    void setLayoutParamsInX(int r = 1);
    void setLayoutParamsInY(int l = 1);

    // 继承CCScrollDelegate
    virtual void scrollViewDidScroll(CCScrollView* view);
    virtual void scrollViewDidZoom(CCScrollView* view) {}
    
    //针对处理后的index 更新对应的item
    void updateCellAtIndex(unsigned int idx);
    //设置布局 是水平还是竖直
    void setVerticalFillOrder(UITableViewVerticalFillOrder order);
    UITableViewVerticalFillOrder getVerticalFillOrder();
    //重新加载
    void reloadData();
    //插入一个item
    void insertCellAtIndex(unsigned int idx);
    void removeCellAtIndex(unsigned int idx);
    
    CCTableViewCell *dequeueCell();
    
    CCTableViewCell *cellAtIndex(unsigned int idx);
    void setNumberOfCellsInTableView(int counts);
    void unregisterScriptTapHandler();
    
    virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
 	virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);

    void registerScriptTapHandler(LUA_FUNCTION handler);
    
    void registerOnClickScriptTapHandler(LUA_FUNCTION handler);
    void unregisterOnClickScriptTapHandler();
    bool isMoved();
    void setIsAutoMove(bool value);
private:
    int column;//列
    int row;//行
    bool isAuotMove;
    CCSize  cellSize;
    CCSize itemSize; //实际每个cell的size  排列size的时候 取这个值
    CCRect viewRect;//view的size
    int everyCounts;//不同布局下 每一行 或者每一列的 数量
    
    unsigned int cellCount;//整个container行数的最大索引
    
    int numberOfCells;
    
    
    int m_nScriptTapHandler;
    int m_nOnClickScriptTapHandler;//item 点击事件
    //设置填充item的方向
    UITableViewVerticalFillOrder m_eVordering;
    //使用的item的 index集合
    std::set<unsigned int>* m_pIndices;
    
    //可以对正在使用的item设置属性
    CCArrayForObjectSorting* m_pCellsUsed;
    //要释放的item
    CCArrayForObjectSorting* m_pCellsFreed;
    //滚动方向
    CCScrollViewDirection m_eOldDirection;
    //偏移量
    int __indexFromOffset(CCPoint offset);
    unsigned int ___indexFromOffset(CCPoint offset);
    unsigned int _indexFromOffset(CCPoint offset);
    CCPoint __offsetFromIndex(unsigned int index);
    CCPoint _offsetFromIndex(unsigned int index);
    int indexFromOffset(CCPoint offset);
    void _updateContentSize();
    
    
 
   
    
    CCTableViewCell* executeTableViewEvent(unsigned int idx);
    
    
    CCTableViewCell* _cellWithIndex(unsigned int cellIndex);
    /**
     修改成
     */
    void _moveCellOutOfSight(CCTableViewCell *cell);
    void _setIndexForCell(unsigned int index, CCTableViewCell *cell);
    void _addCellIfNecessary(CCTableViewCell * cell);
    
    
    
};



#endif /* defined(__miniDotaClient__TableView__) */
