//
//  Scene2.h
//  SecondGame
//
//  Created by SarthakR on 13/02/23.
//

#ifndef Scene2_h
#define Scene2_h
#include "cocos2d.h"
#include "ui/CocosGUI.h"


class Scene2 : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    
    
    CREATE_FUNC(Scene2);
    
//    cocos2d::ui::TextField *textField;
//    void openLayer(Ref *pSender,cocos2d::ui::Widget::TouchEventType type);
    void buttonCenterFoo(Ref *pSender,cocos2d::ui::Widget::TouchEventType type);
    void buttonTopLeftFoo(Ref *pSender,cocos2d::ui::Widget::TouchEventType type);
};

#endif /* Scene2_h */
