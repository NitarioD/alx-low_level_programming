#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - run code
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 4 )
	{
		printf("ERROR\n");
		exit (98);
	}
	switch (argv[2])
	{
		case '+':
			break;
		case '-':
			break;
		case '*':
			break;
		case '/':
			break;
		case '%':
			break;
		default:
			printf("ERROR\n");
			exit (99);
	}


	return (0);
}
