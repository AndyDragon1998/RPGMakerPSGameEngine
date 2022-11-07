/*****************************************************************************/
/*  Author        : Drakonchik(aka Andy)                                     */
/*  Machine       : Sony PlayStation 2						                 */
/*  OS			  : OSDSYS									                 */
/*  Language      : GNU C                                                    */
/*                                                                           */
/*  File Contents : INGAME MUSIC MANAGER AND PLAYER						     */
/*  File Attribute: SOURCE                                                   */
/*  File Name     : musicManager.c                                           */
/*                                                                           */
/*****************************************************************************/

#include "include/musicManager.h"

extern unsigned int size_audsrv_irx;
extern unsigned char audsrv_irx[];

struct audsrv_fmt_t musicFormat;

void initMusicFormat()
{
	musicFormat.bits = 16;
	musicFormat.freq = 44100;
	musicFormat.channels = 1;
	
}



void LoadMusic(BGM *bgm)
{	
	printf("Inside Music Format Function\n");
	char* tempRoot = "host:";

	printf("Inside Music Format Function 2\n");
	bgm->ret = audsrv_init();
	printf("Inside Music Format Function 3\n");
	if (bgm->ret != 0)
	{
		printf("sample: failed to initialize audsrv\n");
		printf("audsrv returned error string: %s\n", audsrv_get_error_string());
		return 1;
	}

	
	bgm->err = audsrv_set_format(&musicFormat);
	audsrv_set_volume(MAX_VOLUME);

	bgm->wav = fopen(bgm->fileName, "rb");
	
	if (bgm->wav == NULL)
	{
		printf("failed to open wav file\n");
		audsrv_quit();
		return 1;
	}

	fseek(bgm->wav, 0x30, SEEK_SET);
}
	

	
void PlayMusic(BGM *bgm)
{
	bgm->ret = fread(bgm->chunk, 1, sizeof(bgm->chunk), bgm->wav);
	if (bgm->ret > 0)
	{
		audsrv_wait_audio(bgm->ret);
		audsrv_play_audio(bgm->chunk, bgm->ret);
	}
	
}

void UnloadMusic(BGM *bgm)
{
	fclose(bgm->wav);

	printf("sample: stopping audsrv\n");
	//audsrv_quit();

	printf("sample: ended\n");

}
