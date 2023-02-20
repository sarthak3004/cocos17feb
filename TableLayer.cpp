//
//  TableLayer.cpp
//  SecondGame-mobile
//
//  Created by SarthakR on 16/02/23.
//

#include "TableLayer.hpp"
#include <stdio.h>
#include "extensions/GUI/CCScrollView/CCTableView.h"
using namespace cocos2d;
using namespace extension;

cocos2d::LayerColor* TableLayer::createLayer(){
    return cocos2d::LayerColor::create(cocos2d::Color4B(128,0,0,100));
    
}

bool TableLayer::init()
{
    if(!LayerColor::initWithColor(cocos2d::Color4B(128,0,0,100))){
        return false;
    }

    auto winSize = Director::getInstance()->getWinSize();
    
    TableView *tv = TableView::create(this,Size(300,400));
    tv->setPosition(Vec2(10,10));
    tv->setColor(Color3B(0,220,0));
    tv->setDelegate(this);
    this->addChild(tv);
    tv->reloadData();
    return true;
    
}

TableViewCell* TableLayer::tableCellAtIndex(TableView *table, ssize_t idx){
    TableViewCell *cell = table->dequeueCell();
    if(!cell)
        cell = TableViewCell::create();
    cell->setColor(Color3B(0,0,220));
    auto label = Label::createWithTTF("Test", "fonts/arial.ttf", 24);
    label->setPosition(Vec2(100,100));
    cell->addChild(label);
    
    return cell;
}

ssize_t TableLayer::numberOfCellsInTableView(TableView *table){
    return 100;
}

void TableLayer::tableCellTouched(TableView* table, TableViewCell* cell){
    long i = cell->getIdx();
    CCLOG("%ld",i);
}

Size TableLayer::tableCellSizeForIndex(TableView* table, ssize_t idx){
    return Size(20,20);
}
