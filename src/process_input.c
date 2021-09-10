#include "../include/process_input.h"
#include "../include/constants.h"
#include "../include/globals.h"


void process_input(void)
{
    SDL_Event event;

    while(SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            game_is_running = FALSE;
            return;
        }
        else if (event.type == SDL_KEYUP)
        {
            printf("\nKey is up.");
        }
        else if (event.type == SDL_KEYDOWN)
        {
            printf("\nKey is down.");
            switch (event.key.keysym.sym)
            {
                case SDLK_ESCAPE:
                    game_is_running = FALSE;
                    break;
                default:;
            }
        }
    }
}