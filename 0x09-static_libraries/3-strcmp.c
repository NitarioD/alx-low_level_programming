#include "main.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int diff, i = 0;

	do {
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			diff = 0;
			break;
		}
		diff = *(s1 + i) - *(s2 + i);
		i++;
	} while (diff == 0);
	return (diff);
}
