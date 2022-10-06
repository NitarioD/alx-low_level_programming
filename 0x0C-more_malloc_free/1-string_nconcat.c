#include "main.h"
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cpy;
	int i;
	unsigned int j;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
