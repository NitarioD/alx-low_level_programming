#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: string to be added to
 * @src: string which we want appended to another
 * @n: number of characters in "src" we want appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenD, lenS;

	lenD = 0, i = 0, lenS = 0;
	while (*(dest + lenD) != '\0')
	{
		lenD++;
	}
	while (*(src + lenS) != '\0')
	{
		lenS++;
	}
	if (n > lenS)
	{
		n = lenS;
	}
	while (i < n)
	{
		*(dest + (i + lenD)) = *(src + i);
		i++;
	}
	*(dest + lenD + n) = '\0';
	return (dest);
}
