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
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}
	if (n < size2)
		size2 = n;
	ttLen = size1 + size2;
	concat = malloc(sizeof(char) * ttLen);
	if (concat == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < size1; j++)
		concat[j] = s1[j];
	i = j;
	for (j = 0; j < size2; j++)
		concat[i + j] = s2[j];
	concat[ttLen] = '\0';
	return (concat);
>>>>>>> 0cd5b998fc9a3a8fe269d02a703d62f98a5e874e
}
