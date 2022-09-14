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
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
