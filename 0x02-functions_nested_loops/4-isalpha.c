#include "main.h"

/**
 * main - check the code
 *
 * Description: checks if character is alphabetic
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int i;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
