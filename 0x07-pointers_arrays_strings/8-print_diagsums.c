#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = a[0];
	int sum2 = a[size - 1];

	for (i = 1; i < size; i++)
	{
		sum1 += a[(i * size) + i];
	}
	printf("%d, ", sum1);
	for (i = 1; i < size; i++)
	{
		sum2 += a[size * (i + 1) - i - 1];
	}
	printf("%d\n", sum2);
}
