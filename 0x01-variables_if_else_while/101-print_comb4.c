#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit number combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 1000; i++)
	{
		if (((i % 100) % 10) > ((i / 10) % 10) && ((i / 10) % 10) > ((i % 100) / 10))
		{
			if (i < 100)
			{
				putchar('0');
			}
			else
			{
				putchar('0' + (i / 100));
			}
			putchar(((i % 100) / 10) + '0');
			putchar(((i % 100) % 10) +'0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
