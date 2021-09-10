#include <stdio.h>
#include <SDL2/SDL.h>
#include "constants.h"
#include "window.h"
#include "renderer.h"
#include "globals.h"
#include "process_input.h"
#include "chip8.h"
#include "chip8_keyboard.h"

const char keyboard_map[CHIP8_TOTAL_KEYS] = {
    SDLK_0, SDLK_1, SDLK_2, SDLK_3, 
    SDLK_4, SDLK_5, SDLK_6, SDLK_7,
    SDLK_8, SDLK_9, SDLK_a, SDLK_b,
    SDLK_c, SDLK_d, SDLK_e, SDLK_f,
};


int main(void)
{
    printf("\nCHIP-8 EMULATOR");
    chip8 chip8;
    // chip8_keyboard_down(&chip8.keyboard, 0x0F);
    // bool is_down = chip8_keyboard_is_down(&chip8.keyboard, 0x0A);
    // printf("\n%i", is_down);

    // chip8_memory_set(&chip8.memory, 50, 'z');
    // printf("\n%c", chip8_memory_get(&chip8.memory, 50));
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