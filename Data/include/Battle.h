#ifndef RPG_BATTLE
#define RPG_BATTLE

#include "ingameManager.h"

void BattleRPGStart(GSGLOBAL* gsGlobal);
void BattleRPGUpdate(GSGLOBAL* gsGlobal);
void BattleRPGDraw(GSGLOBAL* gsGlobal);
void BattleRPGEnd(GSGLOBAL* gsGlobal);

extern IngameManager BattleRPG;

#endif
