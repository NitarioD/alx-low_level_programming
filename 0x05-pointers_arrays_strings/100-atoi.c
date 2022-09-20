#include "main.h"
/**
 * _atoi - pointers arithmetic
 *
 * @s: string
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int n, i;

	int sign = 1, num = 0, len = 0, pos = 1;

	if (*s == '-')
	{
		s++;
		sign = -1;
	}
	while ((*(s + len) != '\0') && (*(s + len) >= '0') && (*(s + len) <= '9'))
	{
		len++;
		pos *= 10;
	}
	pos /= 10;
	for (i = 0; i < len; i++)
	{
		n = *(s + i) - 48;
		num += (pos * n);
		pos /= 10;
	}
	num *= sign;
	if (num != 0)
	{
		return (num);
	}
	return (0);
}
