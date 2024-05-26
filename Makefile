# makefile for the word game

# compiler
CC = gcc

# source files
SRC = $(wildcard *.c)

# dependency files (header files)
DEP = $(wildcard *.h)

# target
TARGET = word_game

all: $(TARGET)

$(TARGET): $(SRC) $(DEP)
	@$(CC) $(SRC) -o $@ -v

.PHONY: all clean

clean:
	-@rm -v $(TARGET)
