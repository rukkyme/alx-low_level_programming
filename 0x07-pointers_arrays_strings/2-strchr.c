#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check for character c
 * @c: character to check for
 *
 * Return: pointer to spot first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}

