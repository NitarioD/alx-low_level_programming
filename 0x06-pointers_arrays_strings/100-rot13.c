#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] <= 'm' && s[i] >= 'a') || s[i] <= 'M')
			{
				s[i] = s[i] + 13;
				break;
			}
			s[i] = s[i] - 13;
			break;
		}
		i++;
	}
	return (s);
}
