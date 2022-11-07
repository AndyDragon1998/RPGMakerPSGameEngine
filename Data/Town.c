/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
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
