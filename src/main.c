#include <stdbool.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include "constants.h"
#include "window.h"
#include "renderer.h"
#include "globals.h"
#include "process_input.h"
#include "chip8.h"
#include "chip8_keyboard.h"



int main(void)
{
    printf("\nCHIP-8 EMULATOR");
    chip8 chip8;
    
    SDL_Window *emulator_window = window_init();
    SDL_Renderer *emulator_renderer = renderer_init(emulator_window);
    game_is_running = TRUE;

    while(game_is_running)
    {
        process_input();
        render(emulator_renderer);
    }

    clean_up(emulator_window);
    return 0;
}