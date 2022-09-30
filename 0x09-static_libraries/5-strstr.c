#include "main.h"

/**
 * _strstr - function finds the first occurrence of the
 * substring n in the string h. The terminating
 * null bytes (\0) are not compared
 *
 * @h: string that is to be scanned
 * @n: string whose pattern we want to find
 * Return: pointer to first occurrence or null
 */
char *_strstr(char *h, char *n)
{
	int i, j;

	i = 0;
	j = 0;
	while (h[i] != '\0')
	{
		while (n[j] != '\0' && h[i + j] != '\0' && h[i + j] == n[j])
		{
			j++;
		}
		if (n[j] == '\0')
		{
			return (&h[i]);
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return ('\0');
}
