#ifndef CHIP8_KEYBOARD_H
#define CHIP8_KEYBOARD_H

#include <stdbool.h>
#include <assert.h>
#include <SDL2/SDL.h>
#include "config.h"


// const char keyboard_map[CHIP8_TOTAL_KEYS] = {
//     SDLK_0, SDLK_1, SDLK_2, SDLK_3, 
//     SDLK_4, SDLK_5, SDLK_6, SDLK_7,
//     SDLK_8, SDLK_9, SDLK_a, SDLK_b,
//     SDLK_c, SDLK_d, SDLK_e, SDLK_f,
// };

extern const char keyboard_map[CHIP8_TOTAL_KEYS]; //defined in chip8_keyboard.c

struct chip8_keyboard
{
    bool keyboard[CHIP8_TOTAL_KEYS];
};

void chip8_keyboard_down(struct chip8_keyboard* keyboard, int key);
void chip8_keyboard_up(struct chip8_keyboard* keyboard, int key);
bool chip8_keyboard_is_down(struct  chip8_keyboard* keyboard, int key);
int chip8_keyboard_map(const char* map, char key);


#endif //CHIP8_KEYBOARD_H