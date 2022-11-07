/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : RPG DUNGEON MAP WITH ENEMIES AND QUESTS			         */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : Dungeon.c            	                                 */
/*                                                                           */
/*****************************************************************************/

#include "include/worldMap.h"
#include "include/Battle.h"
#include "include/Dungeon.h"
#include "include/Town.h"

extern IngameMachine ingameState;

void DungeonStart(GSGLOBAL* gsGlobal)
{

}

void DungeonUpdate(GSGLOBAL* gsGlobal)
{

}

void DungeonDraw(GSGLOBAL* gsGlobal)
{

}

void DungeonEnd(GSGLOBAL* gsGlobal)
{

}

IngameManager Dungeon =
{
	DungeonStart,
	DungeonUpdate,
	DungeonDraw,
	DungeonEnd
};
