# CC specifies which compiler we're using
CC=g++

# CFLAGS specifies all the additional compilation options
CFLAGS= -std=c++17

# LFLAGS specifies the libraries we're linking against
LFLAGS = -lSDL2

# SRC specifies which files to compile
SRC=./src/*.cpp

# INCLUDE specifies the root of the include path
INCLUDE=./include

# EXE specifies the name of our executable
EXE=app

# TODO specify
LIB_OSX=./lib/osx

osx:
	$(CC) $(SRC) $(CFLAGS) $(LFLAGS) -I$(INCLUDE) -o $(EXE) -L$(LIB_OSX)