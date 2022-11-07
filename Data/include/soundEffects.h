#ifndef SOUND_EFFECTS
#define SOUND_EFFECTS

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
	FILE* adpcm;
	audsrv_adpcm_t sample;
	int size;
	u8* buffer;
	char *fileName;
}SE;


void initFormat();
void LoadSoundEffect(SE *se);
void PlaySoundEffect(SE *se, int channel);
void PlaySoundEffect2(SE *se, int channel);
void PlaySoundEffect3(SE *se, int channel);
void UnloadSoundEffect(SE *se);

#endif
