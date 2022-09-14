#include "main.h"

/**
 * main - check the code
 *
 * Description: function that returns the addition of two integers
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int j;

	int numofdigits;

	numofdigits = 1;

	while((n / 10) != 0)
	{
		numofdigits++;
		n /= 10;
	}
	
	if (n < 98)
	{
		while(n != 98)
		{
			if ( n < 0)
			{
				_putchar('-');
				j = -n;
			}
			else
			{
				j = n;
			}
			for (numofdigits; numofdigits > 1; numofdigits--)
			{
				_putchar('0' + (j / (10**numofdigits)));
				j -= (j / (10**numofdigits));
			}
			_putchar('0' + (j % 10));
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while(n != 98)
		{
			j = n;
			for (numofdigits; numofdigits > 1; numofdigits--)
			{
				_putchar('0' + (j / (10**numofdigits)));
				j -= (j / (10**numofdigits));
			}
			_putchar('0' + (j % 10));
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
