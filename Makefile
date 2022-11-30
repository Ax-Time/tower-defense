CC=g++
CFLAGS= -std=c++17
SRC=./src/*.cpp
INCLUDE=./include
EXE=app
LIB_OSX=./lib/osx/lib

osx:
	$(CC) $(CFLAGS) $(SRC) -I$(INCLUDE) -o $(EXE) -L$(LIB_OSX)