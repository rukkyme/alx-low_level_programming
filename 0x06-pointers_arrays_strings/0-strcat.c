#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: This is a string that will be appended
 * @src: A pointter to a character that will also be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen])
	{
		dest[destLen++] = src[srcLen];
		srcLen++;
		destLen++;

	}
	dest[destLen] = '\0';

	
	return (dest);
	
}









