#ifndef INGAME_MANAGER
#define INGAME_MANAGER

#include <gsKit.h>
#include <dmaKit.h>
#include <gsToolkit.h>

typedef void _voidCallBack();

typedef struct
{
    _voidCallBack *Start;

    _voidCallBack *Update;
    
    _voidCallBack *Draw;

    _voidCallBack *End;

    int TransisionIn;

    int TransisionOut;
    
}IngameManager;

typedef struct
{
    int TransisionOutFrames;
    int TransisionInFrames;

    IngameManager* CurrentState;
    IngameManager* ChangeTo;

}IngameMachine;

void IngameStart(IngameMachine* machine, IngameManager* state, GSGLOBAL* gsGlobal);
void IngameChange(IngameMachine* machine, IngameManager* state, GSGLOBAL* gsGlobal);
void IngameUpdate(IngameMachine* machine, GSGLOBAL* gsGlobal);
void IngameDraw(IngameMachine* machine, GSGLOBAL* gsGlobal);

#endif
