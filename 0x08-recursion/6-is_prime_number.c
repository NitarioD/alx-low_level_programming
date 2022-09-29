#include "main.h"

/**
 * check - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: number
 * @m: number
 * Return: integer 1 or 0
 */
int check(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n != m && (n % m) == 0)
	{
		return (0);
	}
	if (n == m)
	{
		return (1);
	}
	return (check(n, m + 1));
}
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 *
 * @n: number
 * Return: integer 1 or 0
 */
int is_prime_number(int n)
{
	return (check(n, 2));
}
