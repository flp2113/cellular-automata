#pragma once

#include <SDL3/SDL.h>

class Screen {
public:
	SDL_Window* window;
	SDL_Renderer* renderer;

	Screen() : window(nullptr), renderer(nullptr) {}

	~Screen() {
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
	}

	SDL_AppResult setup(const char*, int, int, SDL_WindowFlags, SDL_InitFlags);
};