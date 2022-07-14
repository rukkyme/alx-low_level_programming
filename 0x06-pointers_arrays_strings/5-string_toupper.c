#include "main.h"

/**
 *  string_toupper - This changes lowercases letters of a string to uppercases
 *  @str:The string that will be changed
 *  Return: returns character
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index]);

	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}

