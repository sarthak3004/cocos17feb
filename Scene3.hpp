//
//  Scene3.hpp
//  SecondGame-mobile
//
//  Created by SarthakR on 17/02/23.
//

#ifndef Scene3_hpp
#define Scene3_hpp
#include <stdio.h>
#include "cocos2d.h"
#include "ui/CocosGUI.h"


class Scene3 : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    CREATE_FUNC(Scene3);
};

#endif /* Scene3_hpp */
