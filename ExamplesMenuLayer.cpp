//  Author: Chris Campbell - www.iforce2d.net
//  Ported to v3 by Anton Sokolchenko - www.github.com/iSevenDays
//  -----------------------------------------
//
//  only for this demo project, you can remove this in your own app
//

#include "ExamplesMenuLayer.h"

#include "BasicRUBELayer.h"
#include "RUBELayer.h"
#include "DestroyBodyLayer.h"
#include "PinballRUBELayer.h"
#include "PlanetCuteRUBELayer.h"
#include "MenuScreenRUBELayer.h"
#include "UIControlsRUBELayer.h"

using namespace cocos2d;

Scene* ExamplesMenuLayer::scene()
{
    Scene *scene = Scene::create();
    
    // add layer as a child to scene
    Layer* layer = ExamplesMenuLayer::create();
    scene->addChild(layer);
    
    return scene;
}

bool ExamplesMenuLayer::init()
{
	if ( !Layer::init() )
        return false;
    
    auto basicItem = MenuItemFont::create("Basic load", CC_CALLBACK_0(ExamplesMenuLayer::loadBasic, this));
    auto imagesItem = MenuItemFont::create("Images load", CC_CALLBACK_0(ExamplesMenuLayer::loadImages, this));
    auto destroyItem = MenuItemFont::create("Destroy bodies", CC_CALLBACK_0(ExamplesMenuLayer::loadDestroy, this));
    auto pinballItem = MenuItemFont::create("Pinball demo", CC_CALLBACK_0(ExamplesMenuLayer::loadPinball, this));
    auto planetCuteItem = MenuItemFont::create("PlanetCute demo", CC_CALLBACK_0(ExamplesMenuLayer::loadPlanetCute, this));
    auto simpleMenuItem = MenuItemFont::create("Simple menu demo", CC_CALLBACK_0(ExamplesMenuLayer::loadSimpleMenu, this));
    auto uiControlsItem = MenuItemFont::create("UI controls demo", CC_CALLBACK_0(ExamplesMenuLayer::loadUIControls, this));
    
    basicItem->setFontSize(35);
    auto menu = Menu::create(basicItem,imagesItem,destroyItem,pinballItem,planetCuteItem,simpleMenuItem,uiControlsItem,NULL);
    
    menu->alignItemsVertically();
    addChild(menu);
	
	return true;
}

void ExamplesMenuLayer::loadBasic()
{
    Director::getInstance()->replaceScene( BasicRUBELayer::scene() );
}

void ExamplesMenuLayer::loadImages()
{
    Director::getInstance()->replaceScene( RUBELayer::scene() );
}

void ExamplesMenuLayer::loadDestroy()
{
    Director::getInstance()->replaceScene( DestroyBodyLayer::scene() );
}

void ExamplesMenuLayer::loadPinball()
{
    Director::getInstance()->replaceScene( PinballRUBELayer::scene() );
}

void ExamplesMenuLayer::loadPlanetCute()
{
    Director::getInstance()->replaceScene( PlanetCuteRUBELayer::scene() );
}

void ExamplesMenuLayer::loadSimpleMenu()
{
    Director::getInstance()->replaceScene( MenuScreenRUBELayer::scene() );
}

void ExamplesMenuLayer::loadUIControls()
{
    Director::getInstance()->replaceScene( UIControlsRUBELayer::scene() );
}



