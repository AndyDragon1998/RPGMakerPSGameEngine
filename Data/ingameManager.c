/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : INGAME STATES MANAGER BATTLE MAP CITY AND DUNGEON	     */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : menuState.c                                              */
/*                                                                           */
/*****************************************************************************/

#include "include/ingameManager.h"

void IngameStart(IngameMachine* machine, IngameManager* state, GSGLOBAL* gsGlobal)
{
    if (state != 0 && machine != 0)
    {
        machine->ChangeTo = 0;
        machine->TransisionOutFrames = -1;
        machine->TransisionInFrames = -1;

        machine->CurrentState = state;
        machine->CurrentState->Start(gsGlobal);
    }
}


void IngameChange(IngameMachine* machine, IngameManager* state, GSGLOBAL* gsGlobal)
{
    if (state != 0 && machine != 0)
    {
        machine->ChangeTo = 0;

        machine->CurrentState->End(gsGlobal);

        machine->CurrentState = state;

        machine->CurrentState->Start(gsGlobal);
    }
}


void IngameUpdate(IngameMachine* machine, GSGLOBAL* gsGlobal)
{
    if (machine != 0)
    {
        machine->CurrentState->Update(gsGlobal);
    }
}

void IngameDraw(IngameMachine* machine, GSGLOBAL* gsGlobal)
{
    if (machine != 0)
    {
        machine->CurrentState->Draw(gsGlobal);
    }
}

