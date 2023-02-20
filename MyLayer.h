//
//  MyLayer.h
//  SecondGame
//
//  Created by SarthakR on 14/02/23.
//

#ifndef MyLayer_h
#define MyLayer_h
#include "ui/CocosGUI.h"
class MyLayer : public cocos2d::LayerColor
{
public:
    static cocos2d::LayerColor* createLayer();
    virtual bool init();
    CREATE_FUNC(MyLayer);
    
    bool foo(cocos2d::Touch *touch,cocos2d::Event *event);
    
    void closeLayer(Ref *pSender,cocos2d::ui::Widget::TouchEventType type);
    
};

#endif /* MyLayer_h */
