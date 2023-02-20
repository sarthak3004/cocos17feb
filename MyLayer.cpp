//
//  MyLayer.cpp
//  SecondGame
//
//  Created by SarthakR on 14/02/23.
//

#include <stdio.h>
#include "MyLayer.h"
USING_NS_CC;
cocos2d::LayerColor* MyLayer::createLayer(){
    return cocos2d::LayerColor::create(cocos2d::Color4B(128,0,0,100));
    
}

bool MyLayer::init()
{
    if(!LayerColor::initWithColor(cocos2d::Color4B(128,0,0,100))){
        return false;
    }
    
//    auto sprite = cocos2d::Sprite::create("HelloWorld.png");
//    sprite->setScale(4);
//    sprite->setPosition(160,240);
//    this->addChild(sprite);
    auto winSize = Director::getInstance()->getWinSize();
    
//    auto pageView = ui::PageView::create();
//    pageView->setDirection(cocos2d::ui::ScrollView::Direction::HORIZONTAL);
//    pageView->setGravity(cocos2d::ui::PageView::Gravity::CENTER_VERTICAL);
//    pageView->setMagneticType(cocos2d::ui::PageView::MagneticType::CENTER);
//    pageView->setBounceEnabled(true);
//    pageView->setItemsMargin(100);
//    pageView->setBackGroundColorType(ui::PageView::BackGroundColorType::SOLID);
//    pageView->setBackGroundColor(Color3B(0, 255, 0));
//    pageView->setContentSize(Size(winSize.width,winSize.height/2));
//    pageView->setInnerContainerSize(Size(winSize.width,winSize.height));
//    pageView->setAnchorPoint(Vec2(0.5,0.5));
//    pageView->setPosition(Vec2(winSize.width/2,winSize.height/2));
//
//    for(int i=0;i<10;i++){
//        auto layout = ui::Layout::create();
//        layout->setPosition(Vec2(winSize.width/2,winSize.height/2));
//        auto iv = ui::ImageView::create("HelloWorld.png");
//        iv->setPosition(Vec2(winSize.width/2,winSize.height/4));
//        layout->addChild(iv);
//        auto label = Label::createWithTTF(std::to_string(i), "fonts/arial.ttf", 30);
//        label->setPosition(Vec2(winSize.width/2,winSize.height/2-200));
//        layout->addChild(label);
//        pageView->addChild(layout);
//    }
//    this->addChild(pageView);
//
    
    
    
    
    auto button = cocos2d::ui::Button::create("CloseNormal.png","CloseSelected.png");
    button->addTouchEventListener(CC_CALLBACK_2(MyLayer::closeLayer, this));
    button->setPosition(Vec2(140,240));
    this->addChild(button);
    
    auto touchListener = cocos2d::EventListenerTouchOneByOne::create();
        touchListener->setSwallowTouches(true);
    touchListener->onTouchBegan = CC_CALLBACK_2(MyLayer::foo, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(touchListener, this);

    
    return true;
    
}

bool MyLayer::foo(cocos2d::Touch *touch, cocos2d::Event *event){
    return true;
}


void MyLayer::closeLayer(Ref *pSender, cocos2d::ui::Widget::TouchEventType type)
{
    this->removeFromParent();
}
