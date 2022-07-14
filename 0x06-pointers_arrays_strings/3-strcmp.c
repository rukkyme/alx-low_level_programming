#include "main.h"

/**
 * _strcmp - This compares two strings.
 * @s1: This is a pointer to the first string
 * @s2: This is the second string
 *
 * Return: 0 if similar, positive number if s1 > s2, otherwise negative number
 */
int _strcmp(char *s1, char *s2);
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

