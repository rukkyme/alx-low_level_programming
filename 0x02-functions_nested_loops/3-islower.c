#include "main.h"
/**
 * _islower - this function will check for lower case character
 * @c: the int will be used for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
