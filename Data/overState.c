/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : GAME OVER STATE WHEN PLAYER HAS DIED				     */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : overState.c                                              */
/*                                                                           */
/*****************************************************************************/

#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"

extern StateMachine GameMachineState;

void OverStart(GSGLOBAL* gsGlobal)
{

}

void OverUpdate(GSGLOBAL* gsGlobal)
{

}

void OverDraw(GSGLOBAL* gsGlobal, u64 colour)
{

}

void OverEnd(GSGLOBAL* gsGlobal)
{

}

StateManager OverState =
{
	OverStart,
	OverUpdate,
	OverDraw,
	OverEnd
};
