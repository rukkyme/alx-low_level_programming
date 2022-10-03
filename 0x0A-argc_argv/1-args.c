#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * argc: the number of arguments passed to it
 * @argv: value of the argument
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
