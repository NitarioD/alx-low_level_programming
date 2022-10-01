#include "main.h"
/**
 * main - program that prints its name, followed by a new
 * line.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of arguments passed to function
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]++);
		}
	}
	_putchar('\n');
	return (0);
}
