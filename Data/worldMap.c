/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : MAIN WORLD MAP(OR MANY MAPS) MANAGER AND LOCATION KEEPER */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : menuState.c                                              */
/*                                                                           */
/*****************************************************************************/

#include "include/worldMap.h"
#include "include/Battle.h"
#include "include/Dungeon.h"
#include "include/Town.h"

extern IngameMachine ingameState;

void WorldMapStart(GSGLOBAL* gsGlobal)
{

}

void WorldMapUpdate(GSGLOBAL* gsGlobal)
{

}

void WorldMapDraw(GSGLOBAL* gsGlobal)
{

}

void WorldMapEnd(GSGLOBAL* gsGlobal)
{

}

IngameManager WorldMap =
{
	WorldMapStart,
	WorldMapUpdate,
	WorldMapDraw,
	WorldMapEnd
};
