/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
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

GSTEXTURE TitleImage;

//BGM MenuMusicy;

int selectedOption = 0; // 0 - New Game 1 - Load Game 2- ShutDown game

void MenuStart(GSGLOBAL* gsGlobal)
{
	//initMusicFormat();
	//MenuMusicy.fileName = "host:Audio/BGM/CatInSpaceMono.wav";
	//LoadMusic(&MenuMusicy);


	printf("Loading Image in Memory...\n");
	gsKit_texture_png(gsGlobal, &TitleImage, "host:Graphics/Images/Title.png");

}

void MenuUpdate(GSGLOBAL* gsGlobal)
{
	// This part here plays the music
	//PlayMusic(&MenuMusicy);
	
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

}

void MenuDraw(GSGLOBAL* gsGlobal, u64 colour)
{

	int i = (4096 - gsGlobal->CurrentPointer/1024);
	printf("VRAM: %d\n", i);
	
	
	switch(selectedOption)
	{
		// Start New Game
		case 0:
				// Draw New Game
		break;

		case 1: 
	  			// Draw Load
		break;
		case 2:
	   			// Draw shut down 
		break;
	}

	gsKit_prim_sprite_texture(gsGlobal, &TitleImage,0,  // X1
						0,  // Y2
						0.0f,  // U1
						0.0f,  // V1
						TitleImage.Width, // X2
						TitleImage.Height, // Y2
						TitleImage.Width, // U2
						TitleImage.Height, // V2
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
	MenuDraw,
	MenuEnd
};
