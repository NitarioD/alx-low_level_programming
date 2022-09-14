#include "main.h"

/**
 * times_table - function to print every minute of the day
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int line;

	int column;

	for (line = 0; line < 10; line++)
	{
		for (column = 0; column < 10; column++)
		{
			if ((line * column) >= 10)
			{
				_putchar('0' + ((line * column) / 10));
			}
			else
			{
				if (column != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('0' + ((line * column) % 10));
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
