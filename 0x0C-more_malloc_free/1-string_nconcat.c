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
	int size1 = 0;
	int size2 = 0;
	int j, i = 0;
	int ttLen;
	char *concat;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			size1++;
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0')
		{
			size2++;
			i++;
		}
	}
	if (n < size2)
		size2 = n;
	ttLen = size1 + size2 + 1;
	concat = malloc(ttLen);
	if (concat == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < size1; j++)
		concat[i + j] = s1[j];
	i = j;
	for (j = 0; j < size2; j++)
		concat[i + j] = s2[j];
	concat[ttLen] = '\0';
	return (concat);
}
