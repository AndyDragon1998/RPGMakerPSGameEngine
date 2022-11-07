/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : GAME STATE FOR HANDLING ALL INGAME STATES LIKE BATTLE    */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : gameState.c                                              */
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

void GameDraw(GSGLOBAL* gsGlobal, u64 colour)
{

}
void GameEnd(GSGLOBAL* gsGlobal)
{

}

StateManager GameState =
{
	GameStart,
	GameUpdate,
	GameDraw,
	GameEnd
};
