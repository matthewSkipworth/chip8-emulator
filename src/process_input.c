#include "../include/process_input.h"
#include "../include/constants.h"
#include "../include/globals.h"
#include "../include/chip8_keyboard.h"


void process_input(void)
{
    SDL_Event event;

    while(SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
            {
                game_is_running = FALSE;
                return;
                break;
            }
            case SDL_KEYUP:
            {
                printf("\nKey is up.");
                break;
            }
            case SDL_KEYDOWN:
            {
                char key = event.key.keysym.sym;
                int vkey = chip8_keyboard_map(keyboard_map, key);
                printf("\nKey is down: %c", key);

                break;
            }

        }
    }
}