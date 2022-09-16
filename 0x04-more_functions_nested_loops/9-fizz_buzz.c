#include "main.h"

/**
 * main - print out numbers from 1 - 100, substituting multiples of 3
 * and multiples of 5 with fizz and buzz respectively and substituting
 * multiples of 3 and 5 by the word fizzbuzz
 *
 * Return: 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	putchar('\n');
	return (0);
}
