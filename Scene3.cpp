//
//  Scene3.cpp
//  SecondGame-mobile
//
//  Created by SarthakR on 17/02/23.
//

#include "Scene3.hpp"
#include "ui/CocosGUI.h"
#include <stdio.h>
USING_NS_CC;


Scene* Scene3::createScene()
{
    return Scene3::create();
}



bool Scene3::init()
{
    
    if ( !Scene::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();
    
    cocos2d::ui::Layout* layout = cocos2d::ui::Layout::create();
    layout->setLayoutType(cocos2d::ui::Layout::Type::HORIZONTAL);
    layout->setContentSize(Size(300,200));
    layout->setAnchorPoint(Vec2(0.5,0.5));
    layout->setPosition(Vec2(visibleSize.width/2+visibleOrigin.x,visibleSize.height/2+visibleOrigin.y));
    layout->setBackGroundColorType(cocos2d::ui::Layout::BackGroundColorType::SOLID);
    layout->setBackGroundColor(Color3B(0,0,120));
    layout->setLayoutType(cocos2d::ui::Layout::Type::VERTICAL);
    
    this->addChild(layout);
    
    

    cocos2d::ui::Button* buttonLeft = cocos2d::ui::Button::create("HelloWorld.png");
    buttonLeft->setAnchorPoint(Vec2(0,0));
    layout->addChild(buttonLeft);

    cocos2d::ui::LinearLayoutParameter* left = cocos2d::ui::LinearLayoutParameter::create();
    left->setGravity(cocos2d::ui::LinearLayoutParameter::LinearGravity::LEFT);
    buttonLeft->setLayoutParameter(left);
    
    
    cocos2d::ui::Button* buttonRight = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(buttonRight);
    
    cocos2d::ui::LinearLayoutParameter* right = cocos2d::ui::LinearLayoutParameter::create();
    right->setGravity(cocos2d::ui::LinearLayoutParameter::LinearGravity::RIGHT);
    buttonRight->setLayoutParameter(right);
    
//
    cocos2d::ui::Button* buttonCenter = cocos2d::ui::Button::create("HelloWorld.png");
    layout->addChild(buttonCenter);

    cocos2d::ui::LinearLayoutParameter* center = cocos2d::ui::LinearLayoutParameter::create();
    center->setGravity(cocos2d::ui::LinearLayoutParameter::LinearGravity::CENTER_HORIZONTAL);
    buttonCenter->setLayoutParameter(center);
    
    
    
    
    return true;
}
