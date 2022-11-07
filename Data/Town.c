/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : RPG TOWN MANAGER FOR ALL HOUSES AND VILLAGES AND EVENTS  */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : Town.c       	                                         */
/*                                                                           */
/*****************************************************************************/

#include "include/worldMap.h"
#include "include/Battle.h"
#include "include/Dungeon.h"
#include "include/Town.h"

extern IngameMachine ingameState;

void TownStart(GSGLOBAL* gsGlobal)
{

}

void TownUpdate(GSGLOBAL* gsGlobal)
{

}

void TownDraw(GSGLOBAL* gsGlobal)
{

}

void TownEnd(GSGLOBAL* gsGlobal)
{

}

IngameManager Town =
{
	TownStart,
	TownUpdate,
	TownDraw,
	TownEnd
};
