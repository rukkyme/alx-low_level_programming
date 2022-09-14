#include "main.h"

/**
 *  _isalpha - function to check if c is a letter, lowercase or uppercase
 *  @c: this is an input character
 *  Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
	return (1);
	}
	else
	return (0);
}
