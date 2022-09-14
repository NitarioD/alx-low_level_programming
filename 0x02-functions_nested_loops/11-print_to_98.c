#include "main.h"

/**
 * print_to_98 - function thatmprints natural numbers from n to 98
 *
 * @n: number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int j;

	if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n < 10)
			{
				_putchar('0' + n % 10);
			}
			else if (n > 9 && n <= 99)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else if (n > 99 && n < 999)
			{
				_putchar('0' + (n / 100));
				_putchar('0' + (n % 100) / 10);
				_putchar('0' + (n % 100) % 10);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n < 98; n++)
		{
			j = n;
			if (n < 0)
			{
				_putchar('-');
				j = -n;
			}
			if (n < 10)
			{
				_putchar('0' + j % 10);
			}
			else if (n > 9 && n <= 99)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			else if (n > 99 && n < 999)
			{
				_putchar('0' + (j / 100));
				_putchar('0' + (j % 100) / 10);
				_putchar('0' + (j % 100) % 10);
			}
			_putchar(',');
			_putchar(' ');

		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
