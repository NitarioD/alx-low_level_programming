#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{;
	int i;

	char starting_char = 'a';

	for (i = 0; i < 16; i++)
	{
		if (i > 9)
		{
			putchar(starting_char);
			starting_char++;
		}
		else
		{
			putchar(i + '0');
		}
	}
	return (0);
}
