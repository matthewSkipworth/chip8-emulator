#include <SDL2/SDL.h>

#include "../include/chip8.h"
#include "../include/window.h"
//#include "../include/constants.h"


SDL_Window* window_init(void)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        fprintf(stderr, "\nFailed to initialize SDL on SDL_Init() call: %s", SDL_GetError());
    }
    SDL_Window *new_window = NULL;
    new_window = SDL_CreateWindow(
        EMULATOR_WINDOW_TITLE, 
        SDL_WINDOWPOS_CENTERED, 
        SDL_WINDOWPOS_CENTERED, 
        CHIP8_WIDTH * WINDOW_MULTIPLIER, 
        CHIP8_HEIGHT * WINDOW_MULTIPLIER, 
        SDL_WINDOW_BORDERLESS);

    return new_window;
}


void clean_up(SDL_Window *window)
{
    SDL_DestroyWindow(window);
}