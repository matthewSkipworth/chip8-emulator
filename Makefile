INCLUDES= -I ./include
FLAGS= -g
LFLAGS= -lSDL2 -lSDL2_image -lSDL2_ttf
OBJECTS=./build/chip8_memory.o ./build/globals.o \
	./build/process_input.o ./build/renderer.o \
	./build/window.o ./build/chip8_stack.o \
	./build/chip8_keyboard.o

./build/%.o: ./src/%.c 
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJECTS)
	gcc $(FLAGS) $(INCLUDES) ./src/main.c $(OBJECTS) $(LFLAGS) -o ./bin/main

# ./build/chip8_memory.o: src/chip8_memory.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/chip8_memory.c -c -o ./build/chip8_memory.o

# ./build/globals.o: src/globals.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/globals.c -c -o ./build/globals.o

# ./build/process_input.o: src/process_input.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/process_input.c -c -o ./build/process_input.o

# ./build/renderer.o: src/renderer.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/renderer.c -c -o ./build/renderer.o

# ./build/window.o: src/window.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/window.c -c -o ./build/window.o

# ./build/chip8_stack.o: src/chip8_stack.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/chip8_stack.c -c -o ./build/chip8_stack.o

# ./build/chip8_keyboard.o: src/chip8_keyboard.c
# 	gcc $(FLAGS) $(INCLUDES) ./src/chip8_keyboard.c -c -o ./build/chip8_keyboard.o



run:
	./bin/main
clean:
	rm -r ./build/*