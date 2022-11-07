EE_BIN = RPGMakerPSEnginePS2.elf
EE_OBJS = main.o Data/pad.o Data/stateManager.o Data/menuState.o Data/gameState.o Data/overState.o Data/ingameManager.o Data/worldMap.o Data/Town.o Data/Dungeon.o Data/Battle.o Data/soundEffects.o Data/musicManager.o audsrv.o
EE_LIBS = -L$(PS2SDK)/ports/lib -L$(PS2DEV)/gsKit/lib/ -Lmodules/ds34bt/ee/ -Lmodules/ds34usb/ee/ -lpatches -lfileXio -lpad -ldebug -lmath3d -ljpeg -lfreetype -lgskit_toolkit -lgskit -ldmakit -lpng -lz -lmc -laudsrv -lelf-loader -laudsrv -lc

EE_INCS += -I$(PS2DEV)/gsKit/include -I$(PS2SDK)/ports/include -I$(PS2SDK)/ports/include/freetype2 -I$(PS2SDK)/ports/include/zlib
#EE_CFLAGS is passed to GCC when compiling
#EE_LDFLAGS is passed to GCC/ld when linking

EE_CFLAGS = -I$(PS2DEV)/gsKit/include
EE_LDFLAGS = -L$(PS2DEV)/gsKit/lib

BIN2S = bin2s

all: $(EE_BIN)

	
audsrv.s: $(PS2SDK)/iop/irx/audsrv.irx
	echo "Embedding AUDSRV Driver..."
	$(BIN2S) $< $@ audsrv_irx

clean:
	rm -f $(EE_BIN) $(EE_OBJS)

run: $(EE_BIN)
	ps2client execee host:$(EE_BIN)

reset:
	ps2client reset

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal


#The GS Enviroment Variable and path had to be removed, so that the pad script would function.
