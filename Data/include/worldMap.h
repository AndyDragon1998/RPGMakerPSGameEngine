#ifndef WORLD_MAP
#define WORLD_MAP

#include "ingameManager.h"

void WorldMapStart(GSGLOBAL* gsGlobal);
void WorldMapUpdate(GSGLOBAL* gsGlobal);
void WorldMapDraw(GSGLOBAL* gsGlobal);
void WorldMapEnd(GSGLOBAL* gsGlobal);

extern IngameManager WorldMap;

#endif
