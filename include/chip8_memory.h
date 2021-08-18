#ifndef CHIP8_MEMORY_H
#define CHIP8_MEMORY_H
#include "config.h"


struct chip8_memory
{
    char memory[CHIP8_MEMORY_SIZE];
};

static void chip8_memory_is_in_bounds(int index);
void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char value);
unsigned char chip8_memory_get(struct chip8_memory* memory, int index);

#endif