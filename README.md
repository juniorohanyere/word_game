# Word Game API

A simple API for a simple game of letters to magically determine the word in a person's mind.

The Word Game API provides functions to assist in playing a word game where players determine a word based on the position of letters within a grid.

# Functions

`char *set_pos(int num)`

Determines the string to append to a given number to represent its position, such as `st` for '1st', `nd` for '2nd', or `rd` for 3rd.

- **Parameters:**

	- `num`: The given number.

- **Return Value:**

	- Returns a string representing the position ('st', 'nd', or 'rd').

`int get_pos(char **array, char *str, int num, int pstn)`

Gets the numeral position of letters by row and column and stores them into a string.

- **Parameters:**

	- `array`: Double pointer to a char array of letters.
	- `str`: Char pointer to store the position of the letters.
	- `num`: The total number of letters the expected word contains.
	- `pstn`: The current position.

- **Return Valud:**

	- Return -1 if an end of file condition is encountered.

`char *get_result(data_t data, char **row, char **col)`

Gets the string obtained from cross-referencing positions of letters from rows and columns.

- **Parameters:**

	- `data`: Data structure containing row and column.
	- `row`: Array containing a list of grouped letters for rows.
	- `col`: Array containing a list of grouped letters for columns.

- **Return Value:**

	- Returns the obtained string, which represents the expected word.

# Data Structures

`struct data_s`

A data structure to store the position of letters within a given array.

- **Members:**

	- `row`: Row position.
	- `col`: Column position.

# Usage

This project can be compiled using the `make` utility

```bash
make
```

You may need to perform some clean-up first

```bash
make clean
```
To use the Word Game API, include the `wordg.h` header file in your source code and link against the `libwordg.so` library or `libwordg.dll` library, as the case may be.

The API can also be utilized by other programming languages that supports the use/loading of a shared library functions, like `Python`. Please read the documentations for on how to load a shared library for the programming language you wish to use.

Try the demo

```bash
make test
```

# Demo
https://github.com/juniorohanyere/word_game/assets/106378800/805e9351-d3a6-4852-ba57-d1de85ebe879
