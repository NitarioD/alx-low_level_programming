#include "main.h"

/**
 * _abs - function to print absolute value of a number
 *
 * @no: a number
 *
 * Return: Always 0.
 */
int _abs(int no)
{
	if (no < 0)
	{
		no *= -1;
	}
	return (no);
}
