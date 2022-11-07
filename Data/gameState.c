/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : GAME STATE FOR HANDLING ALL INGAME STATES LIKE BATTLE    */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : menuState.c                                              */
/*                                                                           */
/*****************************************************************************/

#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"

extern StateMachine GameMachineState;

void GameStart(GSGLOBAL* gsGlobal)
{

}

void GameUpdate(GSGLOBAL* gsGlobal)
{

}

void GameEnd(GSGLOBAL* gsGlobal)
{

}

StateManager GameState =
{
	GameStart,
	GameUpdate,
	GameEnd
};
