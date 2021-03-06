#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8_memory.h"
#include "chip8_registers.h"
#include "chip8_stack.h"
#include "chip8_keyboard.h"

typedef struct chip8
{
    struct chip8_memory memory;
    struct chip8_registers registers;
    struct chip8_stack stack;
    struct chip8_keyboard keyboard;

} chip8;

#endif