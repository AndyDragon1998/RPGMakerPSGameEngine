/*
#
# Base source code taken from: audsrv sample
#
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright 2005, ps2dev - http://www.ps2dev.org
# Licenced under GNU Library General Public License version 2
# Review ps2sdk README & LICENSE files for further details.
#
*/

#include "include/soundEffects.h"

struct audsrv_fmt_t format;

void initFormat()
{
	format.bits = 16;
	format.freq = 44100;
	format.channels = 2;
}



void LoadSoundEffect(SE *se)
{
	SifInitRpc(0);
	char* tempRoot = "host:";

	// Initialize Player Bullet Texture
	//textureSetup(&BulletTexture);
	printf("sample: kicking IRXs\n");
	se->ret = SifLoadModule("rom0:LIBSD", 0, NULL);
	printf("libsd loadmodule %d\n", se->ret);
	
	printf("sample: loading SoundEffect audsrv\n");
	se->ret = SifLoadModule(strcat(tempRoot,"audsrv.irx"), 0, NULL);
	printf("audsrv loadmodule %d\n", se->ret);

	se->ret = audsrv_init();
	if (se->ret != 0)
	{
		printf("sample: failed to initialize audsrv\n");
		printf("audsrv returned error string: %s\n", audsrv_get_error_string());
		return 1;
	}
	
	se->adpcm = fopen(se->fileName, "rb");
	
	if (se->adpcm == NULL)
	{
		printf("failed to open adpcm file\n");
		audsrv_quit();
		return 1;
	}

	fseek(se->adpcm, 0, SEEK_END);
	se->size = ftell(se->adpcm);
	fseek(se->adpcm, 0, SEEK_SET);

	se->buffer = malloc(se->size);

	fread(se->buffer, 1, se->size, se->adpcm);
	
	
}
	

	
void PlaySoundEffect(SE *se, int channel)
{
	printf("playing sample..\n");

	audsrv_adpcm_init();
	audsrv_set_volume(MAX_VOLUME);
	audsrv_adpcm_set_volume(channel, MAX_VOLUME);
	audsrv_load_adpcm(&se->sample, se->buffer, se->size);
	audsrv_ch_play_adpcm(channel, &se->sample);
	//nopdelay();
	
}

void PlaySoundEffect2(SE *se, int channel)
{
	audsrv_adpcm_init();
	audsrv_set_volume(MAX_VOLUME);
	audsrv_adpcm_set_volume(channel, MAX_VOLUME);
	audsrv_load_adpcm(&se->sample, se->buffer, se->size);
	audsrv_ch_play_adpcm(channel, &se->sample);
	//nopdelay();
	
}

void PlaySoundEffect3(SE *se, int channel)
{
	audsrv_adpcm_init();
	audsrv_set_volume(MAX_VOLUME);
	audsrv_adpcm_set_volume(channel, MAX_VOLUME);
	audsrv_load_adpcm(&se->sample, se->buffer, se->size);
	audsrv_ch_play_adpcm(channel, &se->sample);
	//nopdelay();
	
}
	
void UnloadSoundEffect(SE *se)
{
	printf("sample played..\n");

	free(se->buffer);
	fclose(se->adpcm);

}

