#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets a-z in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char alphabet;

	alphabet = 'a';
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
