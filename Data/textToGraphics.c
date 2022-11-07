/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
/*  OS			  : PlayStation Portable System (6.61 PRO-C)                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : CONVERTS ASCII TO FONT TO DRAW TEXT ON SCREEN            */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : textToGraphics.c                                         */
/*                                                                           */
/*****************************************************************************/

#include "include/textToGraphics.h"
#include <string.h>



GSTEXTURE FontTexture;

void SetUpFont(int fontType)
{
	FontTexture = gsKit_texture_png(gsGlobal, &image, "host:Graphics/Fonts/TitleFont.PNG");
	// This part here cuts the font in small pieces 
	
	int shift = 1;
	for(int i = 49; i < 58; i++)
	{
		font[i] = QuickGame_Sprite_Create_Slice(0,0,shift*9, 0, 9, 13, FontTexture);
		
		shift++;
	}
	
	shift = 0;

	for(int i = 65; i < 75; i++)
	{
		font[i] = QuickGame_Sprite_Create_Slice(0,0,shift*9, 13, 9, 13, FontTexture);
		shift++;
	}
	
	shift = 0;
		    
	for(int i = 75; i < 85; i++)
	{
		font[i] = QuickGame_Sprite_Create_Slice(0,0,shift*9, 26, 9, 13, FontTexture);
		shift++;
	}
		    
	shift = 0;
		    
	for(int i = 85; i < 92; i++)
	{
		font[i] = QuickGame_Sprite_Create_Slice(0,0,shift*9, 39, 9, 13, FontTexture);
		shift++;
	}
}

void DrawText(int xpos, int ypos, char* Text, GSGLOBAL* gsGlobal)
{
	for(int i = 0; i < strlen(Text); i++)
	{
		int ascii = Text[i];
		if(ascii == 32) goto Skip;
		font[ascii]->transform.position.x = xpos + i * 13;
		font[ascii]->transform.position.y = ypos;
		QuickGame_Sprite_Draw(font[ascii]);
		Skip:
	}
}

void DrawAnimatedText(int xpos, int ypos, char* Text, int type)
{
	
}

void textSelfDestruct()
{
	QuickGame_Texture_Destroy(&FontTexture);
	QuickGame_Sprite_Destroy(&font);
}

