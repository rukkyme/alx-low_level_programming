#include "main.h"

/**
 * is_prime_number - finds out if n is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if n is prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	int start = 1;

	if (start >= n)

		return (0);

	if (n % start == 0)
		return (1);

	return (is_prime_number(n % (start + 1)));
}


