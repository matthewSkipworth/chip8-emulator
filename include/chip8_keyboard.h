#ifndef CHIP8_KEYBOARD_H
#define CHIP8_KEYBOARD_H

#include <stdbool.h>
#include <assert.h>
#include "config.h"

struct chip8_keyboard
{
    bool keyboard[CHIP8_TOTAL_KEYS];
};

void chip8_keyboard_down(struct chip8_keyboard* keyboard, int key);
void chip8_keyboard_up(struct chip8_keyboard* keyboard, int key);
bool chip8_keyboard_is_down(struct  chip8_keyboard* keyboard, int key);
int chip8_keyboard_map(const char* map, char key);


#endif //CHIP8_KEYBOARD_H