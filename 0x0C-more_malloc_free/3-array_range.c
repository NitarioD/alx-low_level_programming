#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min integer
 * @max: max integer
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int diff, *intArr, i = 0;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	intArr = malloc(sizeof(int) * diff);
	if (intArr == NULL)
		return (NULL);
	while (i < diff)
	{
		intArr[i] = min + i;
		i++;
	}
	return (intArr);
}
