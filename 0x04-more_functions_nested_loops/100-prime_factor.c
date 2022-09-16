#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the highest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long long number = 612852475143;

	unsigned long long i;

	for (i = 2; i <= number; i++)
	{
		while ((number % i) == 0 && number != i)
		{
			number /= i;
		}
	}
	printf("%llu\n", number);
	return (0);
}
