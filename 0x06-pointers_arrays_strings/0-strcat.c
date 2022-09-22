#include "main.h"
/**
 * _strcat - pointers arithmetic
 *
 * @dest: destination array
 * @src: source array
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int lenD, lenS, i;

	lenD = 0, lenS = 0;
	while (*(dest + lenD) != '\0')
	{
		lenD++;
	}
	while (*(src + lenS) != '\0')
	{
		lenS++;
	}
	for (i = 0; i < lenS; i++)
	{
		*(dest + (lenD + i)) = *(src + i);
	}
	*(dest + (lenD + lenS)) = '\0';
	return (dest);
}
