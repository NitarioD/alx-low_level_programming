#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 *
 * @s: string to be converted
 * Return: string
 */
char *string_toupper(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	while (len--)
	{
		if (s[len] >= 97 && s[len] <= 122)
		{
			*(s + len) = s[len] - 32;
		}
	}
	return (s);
}
