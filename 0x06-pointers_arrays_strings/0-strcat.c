#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: This is a string that will be appended
 * @src: A pointter to a character that will also be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}









