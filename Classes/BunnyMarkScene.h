#pragma once

#include "cocos2d.h"

USING_NS_CC;

typedef struct
{
    float x, xv, y, yv, r, rv;
    Sprite *sprite;
} Bunny;

class BunnyMarkScene : public Scene
{
public:
    CREATE_FUNC(BunnyMarkScene);

    virtual bool init();

    virtual void onEnter();

    virtual void onExit();

    virtual void update(float dt);

private:
    float minX = 0;
    float maxX = 0;
    float minY = 0;
    float maxY = 0;
    float fpsTime;
    float fpsCount;

    Sprite *bunnySprite;
    std::vector<Bunny> bunnies;

    int randomInt(int min, int max);

    void initBunny(Bunny *bunny);

    void moreBunnies(int more);
};
