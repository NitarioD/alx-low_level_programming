#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets a-z in lower case exempting e and q
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
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	return (0);
}
