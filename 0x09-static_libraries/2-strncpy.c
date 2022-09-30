#include "main.h"
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i  < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
