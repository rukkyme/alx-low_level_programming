#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: This is a string that will be appended
 *@src: A pointter to a character that will also be changed
 *Return: dest
 */

char *strcat(char *dest, char *strc)
{
	int i = 0, dest_len = 0;
	
	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src{i};

	return (dest);
}



