SRC = src
BUILD = build/debug
CC = g++
SRC_FILES = $(wildcard $(SRC)/*.c*) $(wildcard $(SRC)/*/*.c*)
OBJ_NAME = play
INCLUDE = -Iinclude
LIB = -Llib
CFLAGS = -std=c++17 -Wall -O0 -g
LFLAGS = -lsdl2 -lsdl2_image


all:
	$(CC) $(CFLAGS) $(LFLAGS) $(INCLUDE) $(LIB) $(SRC_FILES) -o $(BUILD)/$(OBJ_NAME)