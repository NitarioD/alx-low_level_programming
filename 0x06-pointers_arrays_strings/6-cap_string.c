#include "main.h"

/**
 * cap_string - function that capitalizes all words of
 * a string.
 *
 * @str: string
 * Return: string
 */
char *cap_string(char *str)
{
	int i, j;

	char k[] = " \t\n,;.!?\"(){}";

	i = 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if ((str[i] >= 97 && str[i] <= 122) && str[i - 1] == k[j])
			{
				str[i] = str[i] - 32;
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
