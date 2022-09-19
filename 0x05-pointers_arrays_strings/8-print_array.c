#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an
 * array of integers, followed by a new line.
 *
 * @a: array
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a++));
		if (i < 4)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
