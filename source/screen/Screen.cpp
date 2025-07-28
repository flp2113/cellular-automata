#include "Screen.h"

SDL_AppResult Screen::setup(const char* title, int width, int height, SDL_WindowFlags window_flags, SDL_InitFlags init_flags) {
    if (!SDL_Init(init_flags)) {
        SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    if (!SDL_CreateWindowAndRenderer(title, width, height, window_flags, &window, &renderer)) {
        SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    return SDL_APP_CONTINUE;
}