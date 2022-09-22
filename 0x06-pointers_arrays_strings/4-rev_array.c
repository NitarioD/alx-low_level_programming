#include "main.h"
/**
 * reverse_array - function that reverses the content of an
 * array of integers
 *
 * @a: array of integers
 * @n: number of characters present in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;

	int b[n];

	j = n - 1;
	for (j ; j >= 0; j--)
	{
		b[j] = a[n - j - 1];
	}
	while (n--)
	{
		a[n] = b[n];
	}
}
