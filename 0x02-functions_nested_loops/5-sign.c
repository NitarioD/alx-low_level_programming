#include "main.h"

/**
 * main - check the code
 *
 * Description: function to print sign of a number
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}