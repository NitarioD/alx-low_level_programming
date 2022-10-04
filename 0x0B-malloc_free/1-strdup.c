#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 *
 * @str: pointer to string.
 * Return: pointer to copy
 */
char *_strdup(char *str)
{
	int i, size;
	char *cpy;

	size = 0;
	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	cpy = malloc((size + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cpy[i] = str[i];
	cpy[i] = '\0';
	return (cpy);
}
