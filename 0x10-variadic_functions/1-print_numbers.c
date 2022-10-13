#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed
 * by a new line.
 * @separator: char
 * @n: number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	int tmp;
	unsigned int i = 0;

	va_start(nums, n);
	for (i; i < n; i++)
	{
		tmp = va_arg(nums, int);
		printf("%d", tmp);
		if (separator != NULL && i < n-1)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
