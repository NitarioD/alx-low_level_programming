#include "main.h"
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments
 * of your program.
 *
 * @ac: arg count
 * @av: arg vector
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, width, size;
	char *arr;

	j = 0;
	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		width = 0;
		while (av[i][width] != '\0')
		{
			size++;
			width++;
		}
		size++;
	}
	arr = malloc((size + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		width = 0;
		while (av[i][width] != '\0')
		{
			arr[j] = av[i][width];
			j++;
			width++;
		}
		arr[j] = '\n';
		j++;
	}
	arr[size + 1] = '\0';
	return (arr);
}
