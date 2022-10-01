#include "main.h"
/**
 * main - program that prints its arguments no, followed by
 * a new line.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of arguments passed to function
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	argc -= 1;
	_putchar('0' + argc);
	_putchar('\n');
	return (0);
}
