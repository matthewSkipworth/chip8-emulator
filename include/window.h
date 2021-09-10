#ifndef WINDOW_H
#define WINDOW_H

#include <SDL2/SDL.h>
#include "./constants.h"

SDL_Window* window_init(void);
void clean_up(SDL_Window *window);
#endif