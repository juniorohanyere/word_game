# makefile for the word game

# compiler
CC = gcc

# source files
SRC = $(wildcard *.c)

# object files
OBJ = $(patsubst %.c, %.o, $(SRC))

# dependency files (header files)
INC = $(wildcard *.h)

# library for test
LIB = -L. -lwordg

# target
TARGET = libwordg.so

.PHONY: all clean clean-all

# default target
all: $(TARGET)

# make target
$(TARGET): $(OBJ)
	$(CC) -shared $^ -o $@

# compiling each source file into a corresponding object file
%.o: %.c $(INC)
	$(CC) -fPIC -c $< -o $@

# test dynamic library
test: $(TARGET)
	@$(CC) $(INC) test/main.c $(LIB) -o test/main -Wl,-rpath=$(shell pwd)
	@test/main

# clean up generated object files
clean:
	-rm -f $(wildcard *.o)

# clean up all generated files
clean-all: clean
	-rm -f $(TARGET) test/main
