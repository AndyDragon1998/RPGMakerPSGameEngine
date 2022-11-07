#ifndef OVER_STATE
#define OVER_STATE

#include "stateManager.h"

void OverStart(GSGLOBAL* gsGlobal);
void OverUpdate(GSGLOBAL* gsGlobal);
void OverEnd(GSGLOBAL* gsGlobal);

extern StateManager GameState;

#endif
