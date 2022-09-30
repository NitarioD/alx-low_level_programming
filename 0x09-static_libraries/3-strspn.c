#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * substring.
 *
 * @s: string to be scanned
 * @accept: strings to match
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, num;

	num = 0;
	i = 0;
	j = 0;
	while (accept[j] != '\0')
	{
		i = 0;
		while (s[i] != ' ' && s[i] != '\0')
		{
			if (accept[j] == s[i])
			{
				num++;
			}
			i++;
		}
		j++;
	}
	return (num);
}
