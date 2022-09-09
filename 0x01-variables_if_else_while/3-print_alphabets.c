#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets a-z in lower case followed after by uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	alphabet = 'A';
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
