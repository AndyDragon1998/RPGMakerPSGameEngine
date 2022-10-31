#ifndef TOWN_MAP
#define TOWN_MAP

#include "ingameManager.h"

void TownMapStart(GSGLOBAL* gsGlobal);
void TownMapUpdate(GSGLOBAL* gsGlobal);
void TownMapDraw(GSGLOBAL* gsGlobal);
void TownMapEnd(GSGLOBAL* gsGlobal);

extern IngameManager TownMap;

#endif
