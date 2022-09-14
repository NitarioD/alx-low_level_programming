#include "main.h"

/**
 * main - check the code
 *
 * Description: print out all the alphabets in lower case, ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
