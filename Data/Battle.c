/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : RPG BATTLE STATE BETWEEN THE PLAYER AND THE ENEMY		 */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : Battle.c                	                             */
/*                                                                           */
/*****************************************************************************/

#include "include/worldMap.h"
#include "include/Battle.h"
#include "include/Dungeon.h"
#include "include/Town.h"

extern IngameMachine ingameState;

void BattleStart(GSGLOBAL* gsGlobal)
{

}

void BattleUpdate(GSGLOBAL* gsGlobal)
{

}

void BattleDraw(GSGLOBAL* gsGlobal)
{

}

void BattleEnd(GSGLOBAL* gsGlobal)
{

}

IngameManager Battle =
{
	BattleStart,
	BattleUpdate,
	BattleDraw,
	BattleEnd
};
