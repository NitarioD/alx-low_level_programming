#include "main.h"

/**
 * print_number - function that prints the number
 *
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	int numofdigits = 0;

	int initnumofdigits;

	int number = n;

	int denominator = 10;

	int i;

	int j;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	do {
		number /= 10;
		numofdigits++;
	} while (number != 0);
	initnumofdigits = numofdigits;
	for (i = 1; i < initnumofdigits; i++)
	{
		for (j = 1; j < numofdigits - 1; j++)
			denominator *= 10;
		_putchar('0' + (n / denominator));
		if (n / denominator != 0)
			n -= (n / denominator) * denominator;
		else
			n = (n + denominator) - denominator;
		denominator = 10;
		numofdigits--;
	}
	_putchar('0' + (n % 10));
	_putchar('\n');
}
