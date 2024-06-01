#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "../wordg.h"

/**
 * isnumber - checks if input is number
 *
 * @str: the input to check
 *
 * Return: return 0 if @str is not number
 *	   return 1 otherwise
*/

int isnumber(char *str)
{
	int i;

	if (str[0] == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i] == 0))
			return (0);
	}

	return (1);
}

/**
 * main - entry point
 *
 * Description: a word game program
 *
 * Return: always return 0
*/

int main(void)
{
	int flag, i;
	size_t *n = malloc(sizeof(size_t) * 1024);
	char *str = NULL;
	char *row[] = {"ABCDE", "FGHIJ", "KLMNO", "PQRST", "UVWXY", "Z", NULL};
	char *col[] = {"AFKPUZ", "BGLQV", "CHMRW", "DINSX", "EJOTY", NULL};
	data_t data;

	printf("----------------(Word Game)----------------\n");
	printf("Magically Determines the Word in Your Mind\n");
	printf("-------------------------------------------\n");
	printf("\tCTRL+D or CTRL+C to exit\n\n");

	while (1)
	{
		do {
			printf("How many letters does the word contain?: ");

			flag = getline(&str, n, stdin);
			if (flag == -1)
			{
				free(str);
				exit(EXIT_SUCCESS);
			}

			str[strlen(str) -1] = '\0';

		} while (isnumber(str) == 0);

		i = atoi(str);

		data.row = malloc(sizeof(char) * (i + 1));
		data.col = malloc(sizeof(char) * (i + 1));

		strcpy(data.row, "");
		strcpy(data.col, "");

		flag = get_pos(row, data.row, i, 1);
		if (flag == -1)
			return (0);

		printf("Nice, so we go again!\n\n");

		flag = get_pos(col, data.col, i, 1);
		if (flag == -1)
			return (0);

		printf("Your Word is: %s\n", get_result(data, row, col));
		printf("\n");
	}

	return (0);
}
