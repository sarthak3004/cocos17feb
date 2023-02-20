//
//  Scene2.cpp
//  SecondGame
//
//  Created by SarthakR on 13/02/23.
//

#include "Scene2.h"
#include "ui/CocosGUI.h"
#include "extensions/GUI/CCScrollView/CCTableView.h"
#include <stdio.h>
#include<iostream>
#include "MyLayer.h"
#include "TableLayer.hpp"
#include "Scene3.hpp"
#include "Scene4.hpp"
USING_NS_CC;
using namespace extension;

Scene* Scene2::createScene()
{
    return Scene2::create();
}



bool Scene2::init()
{

    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();
    
//    auto textField = cocos2d::ui::TextField::create("","Arial",24);
//    textField->setPosition(Vec2(150,300));
//    textField->setPlaceHolder("Type...");
//    this->addChild(textField);
    
    //auto grid = GridBase::create(Size(300,300));
    
//    auto pageView = ui::PageView::create();
//    pageView->setDirection(cocos2d::ui::ScrollView::Direction::HORIZONTAL);
//    pageView->setGravity(cocos2d::ui::PageView::Gravity::CENTER_VERTICAL);
//    pageView->setMagneticType(cocos2d::ui::PageView::MagneticType::CENTER);
//    pageView->setBounceEnabled(true);
//    pageView->setItemsMargin(100);
//
//    pageView->setContentSize(Size(visibleSize.width,visibleSize.height));
//    pageView->setInnerContainerSize(Size(visibleSize.width,visibleSize.height));
//
//    for(int i=0;i<10;i++){
//        auto iv = ui::ImageView::create("HelloWorld.png");
//        iv->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
//        pageView->addChild(iv,1);
////        auto label = Label::createWithTTF(std::to_string(i), "fonts/arial.ttf", 30);
////        label->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
////        pageView->addChild(label,2);
//    }
//    this->addChild(pageView);
    
//    auto button = cocos2d::ui::Button::create("CloseNormal.png","CloseSelected.png");
//    button->addTouchEventListener(CC_CALLBACK_2(Scene2::openLayer, this));
//    button->setPosition(Vec2(160,240));
//    this->addChild(button);
//    auto sprite = cocos2d::Sprite::create("HelloWorld.png");
//    sprite->setScale(4);
//    sprite->setPosition(160,240);
//    this->addChild(sprite);
//    auto tl = TableLayer::create();
////    tl->setAnchorPoint(Vec2(0.5,0.5));
////    tl->setPosition(Vec2(visibleSize.width/2,visibleSize.height/2));
//    this->addChild(tl);
    
    
    
    cocos2d::ui::Layout* layout = cocos2d::ui::Layout::create();
    layout->setLayoutType(cocos2d::ui::Layout::Type::RELATIVE);
    layout->setContentSize(visibleSize);
    layout->setAnchorPoint(Vec2(0.5,0.5));
    CCLOG("%f,%f",layout->getAnchorPoint().x,layout->getAnchorPoint().y);
    layout->setBackGroundColorType(cocos2d::ui::Layout::BackGroundColorType::SOLID);
    layout->setBackGroundColor(Color3B::GREEN);
    // Size backgroundSize = background->getContentSize();
    layout->setPosition(Vec2(visibleOrigin.x + visibleSize.width / 2, visibleOrigin.y + visibleSize.height / 2));
    /*_uiLayer->*/this->addChild(layout);

    // top left
    cocos2d::ui::Button* button_TopLeft = cocos2d::ui::Button::create("HelloWorld.png");
    button_TopLeft->addTouchEventListener(CC_CALLBACK_2(Scene2::buttonTopLeftFoo, this));
    layout->addChild(button_TopLeft);

    cocos2d::ui::RelativeLayoutParameter* rp_TopLeft = cocos2d::ui::RelativeLayoutParameter::create();
    rp_TopLeft->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_LEFT);
    button_TopLeft->setLayoutParameter(rp_TopLeft);


    // top center horizontal
    cocos2d::ui::Button* button_TopCenter = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_TopCenter);

    cocos2d::ui::RelativeLayoutParameter* rp_TopCenter = cocos2d::ui::RelativeLayoutParameter::create();
    rp_TopCenter->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_CENTER_HORIZONTAL);
    button_TopCenter->setLayoutParameter(rp_TopCenter);


    // top right
    cocos2d::ui::Button* button_TopRight = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_TopRight);

    cocos2d::ui::RelativeLayoutParameter* rp_TopRight = cocos2d::ui::RelativeLayoutParameter::create();
    rp_TopRight->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_TOP_RIGHT);
    button_TopRight->setLayoutParameter(rp_TopRight);


    // left center
    cocos2d::ui::Button* button_LeftCenter = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_LeftCenter);

    cocos2d::ui::RelativeLayoutParameter* rp_LeftCenter = cocos2d::ui::RelativeLayoutParameter::create();
    rp_LeftCenter->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_LEFT_CENTER_VERTICAL);
    button_LeftCenter->setLayoutParameter(rp_LeftCenter);


    // center
    cocos2d::ui::Button* buttonCenter = cocos2d::ui::Button::create("HelloWorld.png");
    buttonCenter->addTouchEventListener(CC_CALLBACK_2(Scene2::buttonCenterFoo, this));
    layout->addChild(buttonCenter);
    
    
    cocos2d::ui::RelativeLayoutParameter* rpCenter = cocos2d::ui::RelativeLayoutParameter::create();
    rpCenter->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::CENTER_IN_PARENT);
    buttonCenter->setLayoutParameter(rpCenter);


    // right center
    cocos2d::ui::Button* button_RightCenter = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_RightCenter);

    cocos2d::ui::RelativeLayoutParameter* rp_RightCenter = cocos2d::ui::RelativeLayoutParameter::create();
    rp_RightCenter->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_RIGHT_CENTER_VERTICAL);
    button_RightCenter->setLayoutParameter(rp_RightCenter);


    // left bottom
    cocos2d::ui::Button* button_LeftBottom = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_LeftBottom);

    cocos2d::ui::RelativeLayoutParameter* rp_LeftBottom = cocos2d::ui::RelativeLayoutParameter::create();
    rp_LeftBottom->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_LEFT_BOTTOM);
    button_LeftBottom->setLayoutParameter(rp_LeftBottom);


    // bottom center
    cocos2d::ui::Button* button_BottomCenter = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_BottomCenter);

    cocos2d::ui::RelativeLayoutParameter* rp_BottomCenter = cocos2d::ui::RelativeLayoutParameter::create();
    rp_BottomCenter->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_BOTTOM_CENTER_HORIZONTAL);
    button_BottomCenter->setLayoutParameter(rp_BottomCenter);


    // right bottom
    cocos2d::ui::Button* button_RightBottom = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(button_RightBottom);

    cocos2d::ui::RelativeLayoutParameter* rp_RightBottom = cocos2d::ui::RelativeLayoutParameter::create();
    rp_RightBottom->setAlign(cocos2d::ui::RelativeLayoutParameter::RelativeAlign::PARENT_RIGHT_BOTTOM);
    button_RightBottom->setLayoutParameter(rp_RightBottom);
    return true;
}

//void Scene2::openLayer(Ref *pSender, cocos2d::ui::Widget::TouchEventType type){
//
////    auto userdefaults = cocos2d::UserDefault::getInstance();
////    std::string str = textField->getString();
////    userdefaults->setStringForKey("userInput",str);
////    std::cout<<userdefaults->getStringForKey("userInput");
//    auto layer = MyLayer::create();
//    this->addChild(layer);
//
//}

void Scene2::buttonCenterFoo(Ref *pSender,cocos2d::ui::Widget::TouchEventType type){
    switch (type)
    {
        case ui::Widget::TouchEventType::BEGAN:
            break;
        case ui::Widget::TouchEventType::ENDED:
        {
            auto scene3 = Scene3::create();
            Director::getInstance()->pushScene(scene3);
            break;
        }
        default:
            break;
    }
    
}

void Scene2::buttonTopLeftFoo(Ref *pSender, cocos2d::ui::Widget::TouchEventType type){
    switch (type)
    {
        case ui::Widget::TouchEventType::BEGAN:
            break;
        case ui::Widget::TouchEventType::ENDED:
        {
            auto scene4 = Scene4::create();
            Director::getInstance()->pushScene(scene4);
            break;
        }
        default:
            break;
    }
    
}
