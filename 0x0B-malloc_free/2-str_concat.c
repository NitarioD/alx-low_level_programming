#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: pointer to string one.
 * @s2: pointer to string two.
 * Return: pointer to copy
 */
char *str_concat(char *s1, char *s2)
{
	int i, size, size2;
	char *cpy;

	size = 0;
	size2 = 0;
	while (s1 != NULL && s1[size] != '\0')
		size++;
	while (s2 != NULL && s2[size2] != '\0')
		size2++;
	cpy = malloc((size + size2 + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cpy[i] = s1[i];
	for (i = 0; i < size2; i++)
		cpy[i + size] = s2[i];
	cpy[(size + size2)] = '\0';
	return (cpy);
}
