#ifndef DUNGEON_MAP
#define DUNGEON_MAP

#include "ingameManager.h"

void DungeonMapStart(GSGLOBAL* gsGlobal);
void DungeonMapUpdate(GSGLOBAL* gsGlobal);
void DungeonMapDraw(GSGLOBAL* gsGlobal);
void DungeonMapEnd(GSGLOBAL* gsGlobal);

extern IngameManager DungeonMap;

#endif
