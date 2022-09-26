#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to
 * memory area dest
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to be copied
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
