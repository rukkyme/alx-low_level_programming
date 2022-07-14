#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string
 *
 * Return: The string
 */
char *leet(char *str)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char leet[10] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; j++)
	{
		if (str[i] == subs[j])
			str[i] = leet[j / 2];
	}

	return (str);
}


