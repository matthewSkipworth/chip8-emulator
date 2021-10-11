CC=gcc
INCLUDES= -I "./include/"
FLAGS=-g -Wall
LFLAGS=-lSDL2 -lSDL2_image -lSDL2_ttf
OBJECTS=./build/chip8_memory.o ./build/globals.o \
	./build/process_input.o ./build/renderer.o \
	./build/window.o ./build/chip8_stack.o \
	./build/chip8_keyboard.o ./build/main.o

./build/%.o: ./src/%.c 
	$(CC) $(FLAGS) $(INCLUDES) -c $^ -o $@

all: build bin $(OBJECTS)
	gcc $(FLAGS) $(OBJECTS)  $(LFLAGS) -o ./bin/main

run:
	./bin/main
clean:
	$(RM) -r ./build/* ./bin/*

build:
	mkdir ./build

bin:
	mkdir ./bin
