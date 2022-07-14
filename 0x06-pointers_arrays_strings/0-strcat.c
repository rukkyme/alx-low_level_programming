#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: This is a pointer to a character that will be changed
 *@src: A pointter to a character that will also be changed
 *Return: dest
 */

char *strcat(char *dest, char *strc)
{
	int i, j;

	i = 0;
	
	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0
	while (src[j] != '\0')
	{
	dest [i] = src[j]
	j++;
	i++;
	}
	dest[i] = '\0';

	return (dest);
}


