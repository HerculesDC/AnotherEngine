#pragma once
//Prevents main from being redefined as SDL_main
#define SDL_MAIN_HANDLED 
#include "../../../SDL/include/SDL.h"

class Game {
	//at startup, SDL_SetMainReady(); has to be called
	public:
		static Game* Instance();
		compl Game();
		void run();
	private:
		Game();
};