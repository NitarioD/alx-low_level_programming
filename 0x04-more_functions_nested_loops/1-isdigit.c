#include "main.h"

/**
 * _isdigit: function that checks for digit
 *
 * @c: integer to be checked
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
