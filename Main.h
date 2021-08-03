#pragma once

#define GAME_NAME "Test_Game"

#define GAME_RES_WIDTH 384
#define GAME_RES_HEIGHT 216
#define GAME_RES_BPP 32
#define GAME_DRAWING_AREA_MEMORY_SIZE (GAME_RES_WIDTH * GAME_RES_HEIGHT * (GAME_RES_BPP / 8))

typedef struct GAMEBITMAP
{
	BITMAPINFO BitamapInfo;
	void* Memory;
} GAMEBITMAP;

LRESULT CALLBACK MainWindowProc(_In_ HWND WindowHandler, _In_ UINT Message, _In_ WPARAM WParam, _In_ LPARAM LParam);

DWORD CreateMainGameWindow(void);

BOOL GameIsAlreadyRunning(void);

void ProcessPlayerInput(void);
void RenderFrameGraphics(void);