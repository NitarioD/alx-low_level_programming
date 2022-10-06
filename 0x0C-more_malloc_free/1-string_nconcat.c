#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of char to copy
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	cpy = malloc(sizeof(char) * (i + n + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		cpy[i] = s2[j];
		i++, j++;
	}
	cpy[i] = '\0';
	return (cpy);
}
