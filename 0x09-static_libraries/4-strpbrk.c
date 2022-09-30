#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a
 * set of bytes.
 *
 * @s: string to he scanned
 * @accept: strings to be used to scan other string
 * Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
