//  Author: Chris Campbell - www.iforce2d.net
//  Ported to v3 by Anton Sokolchenko - www.github.com/iSevenDays
//  -----------------------------------------
//
//  only for this demo project, you can remove this in your own app
//

#ifndef EXAMPLES_MENU_LAYER
#define EXAMPLES_MENU_LAYER

#include "cocos2d.h"

class ExamplesMenuLayer : public cocos2d::Layer {
public:
    CREATE_FUNC(ExamplesMenuLayer);
    static cocos2d::Scene* scene();
    virtual bool init();
    void loadBasic();
    void loadImages();
    void loadDestroy();
    void loadPinball();
    void loadPlanetCute();
    void loadSimpleMenu();
    void loadUIControls();
};

#endif /* EXAMPLES_MENU_LAYER */
