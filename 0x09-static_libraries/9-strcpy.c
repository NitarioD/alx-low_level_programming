#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * by src, including the terminating null byte (\0), to
 * the buffer pointed to by dest.
 *
 * @dest: pointer
 * @src: pointer
 * Return: char arr
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != 0)
	{
		len++;
	}
	*(dest + len) = '\0';
	len--;
	for (; len >= 0; len--)
	{
		*(dest + len) = *(src + len);
	}
	return (dest);
}
