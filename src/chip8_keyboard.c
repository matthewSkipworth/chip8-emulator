#include "../include/chip8_keyboard.h"


const char keyboard_map[CHIP8_TOTAL_KEYS] = {
    SDLK_0, SDLK_1, SDLK_2, SDLK_3, 
    SDLK_4, SDLK_5, SDLK_6, SDLK_7,
    SDLK_8, SDLK_9, SDLK_a, SDLK_b,
    SDLK_c, SDLK_d, SDLK_e, SDLK_f,
};

static void chip8_keyboard_ensure_in_bounds(int key)
{
    assert(key >= 0 && key < CHIP8_TOTAL_KEYS);  
}

void chip8_keyboard_down(struct chip8_keyboard* keyboard, int key)
{
    keyboard->keyboard[key] = true;
}

void chip8_keyboard_up(struct chip8_keyboard* keyboard, int key)
{
    keyboard->keyboard[key] = false;
}
bool chip8_keyboard_is_down(struct  chip8_keyboard* keyboard, int key)
{
    return keyboard->keyboard[key];
}
int chip8_keyboard_map(const char* map, char key)
{
    for (int i = 0; i < CHIP8_TOTAL_KEYS; i++)
    {
        if (map[i] == key)
        {
            return i;
        }
    }
    return -1;
}
