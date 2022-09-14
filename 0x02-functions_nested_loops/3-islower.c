#include "main.h"

/**
 * _islower - checks if alphabet is upper or lower case
 *
 * @c: a character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
