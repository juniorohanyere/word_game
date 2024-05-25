#include <ctype.h>

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
