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
	int i;

	char alphabet;

	alphabet = 'z';
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
