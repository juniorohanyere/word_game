#include <ctype.h>

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
		if (isdigit(str[i]) == 0)
			return (0);
	}

	return (1);
}
