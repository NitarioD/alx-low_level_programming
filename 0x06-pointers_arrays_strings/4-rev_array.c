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
	int half = n / 2;
	int i = 0;
	int holder;

	while (i < half)
	{
		holder = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = holder;
		i++;
	}
}
