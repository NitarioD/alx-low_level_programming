#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: string to be encoded
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char keys[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == keys[j] || s[i] == (keys[j] - 32))
			{
				s[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
