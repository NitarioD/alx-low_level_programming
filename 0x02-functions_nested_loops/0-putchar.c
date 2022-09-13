#include "main.h"

/**
 * main- Entry point
 *
 * Description: prinnts array of char to screen
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int stringArr[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(stringArr[i]);
	}
	_putchar('\n');
	return (0);
}
