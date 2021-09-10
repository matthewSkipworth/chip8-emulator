#include "../include/renderer.h"

SDL_Renderer* renderer_init(SDL_Window *window)
{
    SDL_Renderer *new_renderer = NULL;
    new_renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET);
    return new_renderer;
}

void render(SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer,0,0,0,0);
    SDL_RenderClear(renderer);
    SDL_Rect rect = {0,0,40,40};
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderFillRect(renderer, &rect);
    SDL_RenderPresent(renderer);
}