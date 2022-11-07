/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
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

void OverEnd(GSGLOBAL* gsGlobal)
{

}

StateManager OverState =
{
	OverStart,
	OverUpdate,
	OverEnd
};
