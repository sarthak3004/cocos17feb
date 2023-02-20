//
//  Scene4.cpp
//  SecondGame-mobile
//
//  Created by SarthakR on 17/02/23.
//

#include "Scene4.hpp"
#include "ui/CocosGUI.h"
#include <stdio.h>
USING_NS_CC;

Scene* Scene4::createScene()
{
    return Scene4::create();
}



bool Scene4::init()
{
    
    if ( !Scene::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
//    Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();
    
//    auto sprite1 = Sprite::create("HelloWorld.png");
//    sprite1->setPosition(Vec2(50,100));
//    this->addChild(sprite1);
    
//
//    int *ptr = new int();
//    *ptr = 5;
//    foo(*ptr);
//    this->schedule([&](float delta){
//
//        foo(*ptr);
//        if(*ptr>10)
//            this->unschedule("scheduleFoo");
//    },2,"scheduleFoo");
////    auto l = [&](){
////        for(int i=0;i<5;i++){
////            j++;
////            foo(j);
////        }
////    };
////    l();
//    foo(*ptr);
    auto lc = LayerColor::create(Color4B(120, 0, 0, 100));
    this->addChild(lc);
//    auto drawNode = DrawNode::create(10.0);
//    this->addChild(drawNode);
//    drawNode->drawLine(Vec2(100,100), Vec2(200,200), Color4F(0, 0, 255, 50));
    
//    ClippingNode * clipper = ClippingNode::create();
//     clipper->setPosition(visibleSize.width / 2, visibleSize.height / 2);
//     this->addChild(clipper);
//    DrawNode * stencil = DrawNode::create();
//     stencil->drawSolidCircle(Vec2(clipper->getBoundingBox().size.width / 2,
//                          clipper->getBoundingBox().size.height / 2), 100, 0, 200, Color4F::MAGENTA);
//     clipper->setStencil(stencil);
//     clipper->setInverted(true);
//
//    auto backGround = Sprite::create("HelloWorld.png");
//    backGround->setScale(5);
//     backGround->setPosition(
//       Vec2(clipper->getContentSize().width / 2,
//         clipper->getContentSize().height / 2));
//    // backGround->setColor(Color3B(31, 32, 35));
//     clipper->addChild(backGround);
   
    auto ng = NodeGrid::create();
    this->addChild(ng);
    auto b1 = cocos2d::ui::Button::create("CloseNormal.png");
    auto b2 = cocos2d::ui::Button::create("CloseNormal.png");
    auto b3 = cocos2d::ui::Button::create("CloseNormal.png");

    ng->addChild(b1);
    ng->addChild(b2);
    ng->addChild(b3);
    return true;
}

void Scene4::foo(int i){
    printf("%d\n",i);
}

