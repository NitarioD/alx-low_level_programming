#include "main.h"

/**
 * main - check the code
 *
 * Description: function to print every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour;
	
	int min;
	
	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
