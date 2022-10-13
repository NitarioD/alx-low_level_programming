#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by
 * a new line.
 *
 * @separator: char
 * @n: number of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	char *ptr;
	unsigned int i = 0;

	va_start(words, n);
	for (i; i < n; i++)
	{
		ptr = va_arg(words, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
			if (separator != NULL && i < n- 1)
				printf("%s", separator);
		}
	}
	va_end(words);
	printf("\n");
}
