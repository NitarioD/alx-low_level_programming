#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 *
 * @no: a number
 *
 * Return: Always 0.
 */
int print_last_digit(int no)
{
	int last = no % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar('0' + last);
	return (last);
}
