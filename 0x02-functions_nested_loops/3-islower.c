#include "main.h"

/**
 * main - check the code
 *
 * Description: checks if alphabet is upper or lower case
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int i;
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
