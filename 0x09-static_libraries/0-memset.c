#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: pointer
 * @b: value
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = n - 1;

	for (; j >= 0; j--)
	{
		s[j] = b;
	}
	return (s);
}
