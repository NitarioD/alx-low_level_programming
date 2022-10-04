#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *
 * @width: rows
 * @height: columns
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 && height < 1)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
