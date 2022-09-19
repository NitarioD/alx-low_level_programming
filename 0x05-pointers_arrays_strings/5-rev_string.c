#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;

	int i = 0;

	int stop;

	char holder;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	if (len % 2 == 0)
	{
		stop = (len / 2);
	}
	else
	{
		stop = (len / 2) + 1;
	}
	for (; len >= stop; len--)
	{
		holder = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = holder;
		i++;
	}
}
