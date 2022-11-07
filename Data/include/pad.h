#ifndef PAD_MANAGER
#define PAD_MANAGER

#include <tamtypes.h>
#include <kernel.h>
#include <sifrpc.h>
#include <loadfile.h>
#include <stdio.h>
#include <libpad.h>
#include <stdbool.h>

typedef struct
{
	bool UP_KEY_TAP;
	bool DOWN_KEY_TAP;
	bool LEFT_KEY_TAP;
	bool RIGHT_KEY_TAP;
	bool SELECT_KEY_TAP;
	bool START_KEY_TAP;
	bool BUTTON_X_KEY_TAP; // X button
	bool BUTTON_O_KEY_TAP; // Circle button
	bool BUTTON_T_KEY_TAP; // Triangle button
	bool BUTTON_S_KEY_TAP; // Square button
	bool BUTTON_L1_KEY_TAP;
	bool BUTTON_L2_KEY_TAP;
	bool BUTTON_R1_KEY_TAP;
	bool BUTTON_R2_KEY_TAP;
	bool UP_KEY_DOWN;
	bool DOWN_KEY_DOWN;
	bool LEFT_KEY_DOWN;
	bool RIGHT_KEY_DOWN;
	bool BUTTON_X_KEY_DOWN; // X button
	bool BUTTON_O_KEY_DOWN; // Circle button
	bool BUTTON_T_KEY_DOWN; // Triangle button
	bool BUTTON_S_KEY_DOWN; // Square button
	bool BUTTON_L1_KEY_DOWN;
	bool BUTTON_L2_KEY_DOWN;
	bool BUTTON_R1_KEY_DOWN;
	bool BUTTON_R2_KEY_DOWN;
	bool HAPTIC_MOTOR; // The motor thingy that vibrates
}Controller;



static void loadModules(void);
static int waitPadReady(int port, int slot);
static int initializePad(int port, int slot);
void PadInitialize();
void UpdatePad();


#endif
