#ifndef TEXTTOGRAPHICS
#define TEXTTOGRAPHICS

#include <unistd.h>

void SetUpFont(int fontType);

void DrawText(int xpos, int ypos, char* Text, GSGLOBAL* gsGlobal);

void DrawAnimatedText(int xpos, int ypos, char* Text, int type);

void textSelfDestruct();

#endif
