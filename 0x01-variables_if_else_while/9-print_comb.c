#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit number combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i > 9)
		{
			putchar((i / 10) + '0');
		}
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
