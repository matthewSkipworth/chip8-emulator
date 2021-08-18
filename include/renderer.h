#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>

SDL_Renderer* renderer_init(SDL_Window *window);
void render(SDL_Renderer *renderer);

#endif