//
//  Scene4.hpp
//  SecondGame-mobile
//
//  Created by SarthakR on 17/02/23.
//

#ifndef Scene4_hpp
#define Scene4_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "ui/CocosGUI.h"


class Scene4 : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(Scene4);
    void foo(int i);
};

#endif /* Scene4_hpp */
