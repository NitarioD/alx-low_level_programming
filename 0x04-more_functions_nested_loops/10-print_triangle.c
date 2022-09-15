#include "main.h"

/**
 * print_triangle: function that prints a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			_putchar(' ');
		}
		for (; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 0)
	{
		_putchar('\n');
	}
}
