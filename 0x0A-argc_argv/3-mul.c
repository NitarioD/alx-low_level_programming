#include "main.h"
/**
 * main - program that prints mul. of two argument received
 * followed by a new line.
 *
 * @argc: number of arguments passed to main function
 * @argv: array of arguments passed to function
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	printf("%d\n", mul);
	return (0);
}
