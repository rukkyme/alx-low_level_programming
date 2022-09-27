#include "main.h"

/**
 * _strpbrk - this searches a string for any of the set of bytes
 * @s: the string to check in
 * @accept: string to check against
 *
 * Return: pointer to byte in the string that matches or null if no
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

		for (i = 0; s[i]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					break;
			}
			if (accept[j])
				return (s + i);
		}
		return (0);
}

