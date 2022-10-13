#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums up all the given args
 *
 * @n: number of args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
