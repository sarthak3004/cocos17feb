//
//  TableLayer.hpp
//  SecondGame-mobile
//
//  Created by SarthakR on 16/02/23.
//

#ifndef TableLayer_hpp
#define TableLayer_hpp
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "extensions/GUI/CCScrollView/CCTableView.h"
using namespace cocos2d;
using namespace extension;
class TableLayer : public cocos2d::LayerColor,public cocos2d::extension::TableViewDataSource,public cocos2d::extension::TableViewDelegate
{
public:
    static cocos2d::LayerColor* createLayer();
    virtual bool init();
    Size winSize;
    virtual TableViewCell* tableCellAtIndex(TableView *table, ssize_t idx);

    virtual ssize_t numberOfCellsInTableView(TableView *table);
    
    virtual void tableCellTouched(TableView* table, TableViewCell* cell);
    
    virtual Size tableCellSizeForIndex(TableView* table, ssize_t idx);
    
    CREATE_FUNC(TableLayer);
};


#endif /* TableLayer_hpp */
