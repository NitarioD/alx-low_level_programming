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

	for (i = 0; i < 100; i++)
	{
		if ((i % 10) > (i / 10))
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
