# makefile for the word game

# compiler
CC = gcc

# source files
SRC = $(wildcard *.c)

# object files
OBJ = $(patsubst %.c, %.o, $(SRC))

# dependency files (header files)
DEP = $(wildcard *.h)

# target
TARGET = libwordg.so

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -shared $^ -o $@

# compiling each source file into a corresponding object file
%.o: %.c $(DEP)
	$(CC) -fPIC -c $< -o $@

.PHONY: all clean

# clean up generated object files
clean:
	-rm -f $(wildcard *.o)

# clean up all generated files
clean-all: clean
	-rm -f $(TARGET)
