/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation Portable				                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : MAIN MENU FOR STARING NEW GAME LOADING AND SHUT DOWN     */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : menuState.c                                              */
/*                                                                           */
/*****************************************************************************/

#include "include/gameState.h"
#include "include/menuState.h"
#include "include/overState.h"
#include "include/musicManager.h"
#include "include/pad.h"

extern StateMachine GameMachineState;
extern Controller PlaystationGamePad;

GSTEXTURE image;

BGM MenuMusicy;

u64 colour;

int selectedOption = 0; // 0 - New Game 1 - Load Game 2- ShutDown game

void MenuStart(GSGLOBAL* gsGlobal)
{
	initMusicFormat();
	MenuMusicy.fileName = "host:Audio/BGM/CatInSpaceMono.wav";
	printf("Loading Music...\n");
	LoadMusic(&MenuMusicy);
	printf("Hello?...\n");

	printf("Loading Image in Memory...\n");
	gsKit_texture_png(gsGlobal, &image, "host:Graphics/Images/Title.png");
	colour = GS_SETREG_RGBAQ(0x80,0x80,0x80,0x80,0x00);

}

void MenuUpdate(GSGLOBAL* gsGlobal)
{
	// This part here plays the music
	PlayMusic(&MenuMusicy);

	int i = (4096 - gsGlobal->CurrentPointer/1024);
	printf("VRAM: %d\n", i);
	
	// Change Menu
	if(PlaystationGamePad.UP_KEY_TAP || selectedOption != 0)
    {
    	selectedOption--;
    }
    else if(PlaystationGamePad.DOWN_KEY_TAP || selectedOption != 2)
    {
    	selectedOption++;
    }

	if(PlaystationGamePad.START_KEY_TAP)
    {	
		switch(selectedOption)
		{
			// Start New Game
			case 0:
				StateMachineChange(&GameMachineState, &GameState, gsGlobal);
			break;

			case 1: 
	   			// Open Load screen
			break;

			case 2:
	   			// Shut down console?
			break;
		}
	}


// Drawing Part

	gsKit_prim_sprite_texture(gsGlobal, &image,0,  // X1
						0,  // Y2
						0.0f,  // U1
						0.0f,  // V1
						image.Width, // X2
						image.Height, // Y2
						image.Width, // U2
						image.Height, // V2
						2,
						colour);
}

void MenuEnd(GSGLOBAL* gsGlobal)
{

}

StateManager MenuState =
{
	MenuStart,
	MenuUpdate,
	MenuEnd
};
