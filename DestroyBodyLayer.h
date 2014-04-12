//  Author: Chris Campbell - www.iforce2d.net
//  Ported to v3 by Anton Sokolchenko - www.github.com/iSevenDays
//  -----------------------------------------
//
//  DestroyBodyLayer
//
//  Just to demonstrate removing bodies from the world. The only thing
//  different to the superclass is the ccTouchesBegan method.
//

#ifndef DESTROY_BODY_LAYER
#define DESTROY_BODY_LAYER

#include "RUBELayer.h"

class DestroyBodyLayer : public RUBELayer
{
public:
    CREATE_FUNC(DestroyBodyLayer);
    static cocos2d::Scene* scene();    
    virtual void onTouchesBegan(const std::vector<Touch*> &touches, Event *event);
};

#endif /* DESTROY_BODY_LAYER */
