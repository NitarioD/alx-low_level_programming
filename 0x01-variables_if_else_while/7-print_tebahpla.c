#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets a-z in lower case in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet--;
	}
	return (0);
}
