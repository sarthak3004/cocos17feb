/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "ui/CocosGUI.h"
#include "Scene2.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}



bool HelloWorld::init()
{
    if ( !Scene::init() )
    {
        return false;
    }

    auto winSize = Director::getInstance()->getWinSize();
    int n=6;
    
    auto mainLabel = Label::createWithTTF("Second Game", "fonts/Marker Felt.ttf",20);
    mainLabel->setPosition(Vec2(winSize.width/2,winSize.height*(n-1)/n));
    mainLabel->setColor(Color3B(255, 0, 0));
    this->addChild(mainLabel);
    
    auto logo = cocos2d::ui::ImageView::create("HelloWorld.png");
    logo->setPosition(Vec2(winSize.width/2,winSize.height*(n-2)/n));
    this->addChild(logo);
    
    auto sprite = Sprite::create("Slider_PressBar.png");
    auto progressTimer = ProgressTimer::create(sprite);
    progressTimer->setType(ProgressTimer::Type::BAR);
    progressTimer->setScale(2);
    auto y = progressTimer->getMidpoint().y;
    progressTimer->setMidpoint(Point(0,y));
    progressTimer->setBarChangeRate(Vec2(1,y));
    progressTimer->setPercentage(0);
    progressTimer->setPosition(Vec2(winSize.width/2,winSize.height*(n-4)/n));
    this->addChild(progressTimer);
    
//    auto loadingBar = cocos2d::ui::LoadingBar::create("Slider_PressBar.png");
//    loadingBar->setDirection(cocos2d::ui::LoadingBar::Direction::RIGHT);
//    loadingBar->setPercent(0);
    
    auto prog = ProgressTo::create(1,100);
    progressTimer->runAction(prog);
    
    auto percentLabel = Label::createWithTTF("","fonts/Marker Felt.ttf", 24);
    percentLabel->setPosition(Vec2(winSize.width/2,winSize.height*(n-5)/n));
    this->addChild(percentLabel);
    this->schedule([=](float delta){
        int percent = int(floor(progressTimer->getPercentage()));
        __String *tempPercent = __String::createWithFormat("%d %%",percent);
        percentLabel->setString(tempPercent->getCString());
        if(percent>=100){
            this->unschedule("foo");
            auto scene2 = Scene2::createScene();
            Director::getInstance()->replaceScene(TransitionFade::create(0,scene2));
        }
    }, 0.1f, "foo");
    
    return true;
}

