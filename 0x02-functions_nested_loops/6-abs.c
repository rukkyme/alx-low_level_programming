#include "main.h"
#include <stdio.h>

/**
 * abs - function that computes the absolute value of an integer
 * Description: This function returns absolute value of an integer
 * @c: this is an integer input used for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}

