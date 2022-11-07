#ifndef MUSIC_MANAGER
#define MUSIC_MANAGER

#include <stdio.h>
#include <string.h>

#include <kernel.h>
#include <sifrpc.h>
#include <loadfile.h>
#include <tamtypes.h>

#include <audsrv.h>

typedef struct
{
	int ret;
	int played;
	int err;
	char chunk[2048];
	FILE *wav;
	char *fileName;
}BGM;

void initMusicFormat();
void LoadMusic(BGM *bgm);
void PlayMusic(BGM *bgm);
void UnloadMusic(BGM *bgm);

#endif
