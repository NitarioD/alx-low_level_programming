#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	int stop;

	while (*(str + len) != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		stop = (len / 2);
	}
	else
	{
		stop = (len / 2) + 1;
	}
	for (; stop <= len; stop++)
	{
		_putchar(*(str + stop));
	}
	_putchar('\n');
}
