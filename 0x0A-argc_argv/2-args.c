#include <stdio.h>

/**
 * main - points all arguments it recieves
 * @argc: number of arguments that is passed to the function
 * @argv: the argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

