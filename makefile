default: run

build/objects: 
	mkdir build/objects

build: 
	mkdir build

directories: build build/objects

build/objects/game_error.o: src/game_error.c src/game_error.h
	gcc -c src/game_error.c -o build/objects/game_error.o

build/objects/game_manager.o: src/game_manager.c src/game_manager.h src/game_error.h
	gcc -c src/game_manager.c -o build/objects/game_manager.o

build/objects/puzzler.o: src/puzzler.c src/game_manager.h
	gcc -c src/puzzler.c -o build/objects/puzzler.o

build/puzzler: build/objects/puzzler.o build/objects/game_manager.o build/objects/game_error.o
	gcc build/objects/puzzler.o build/objects/game_manager.o build/objects/game_error.o -lSDL2 -o build/puzzler

run: directories build/puzzler
	build/puzzler

format:
	clang-format -style=Google -i $$(find . -regex '.*\.\(c\|h\)')

clean:
	rm -r build