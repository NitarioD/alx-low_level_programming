#include "main.h"

/**
 * main - program that prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0, cent;
	int coinNum = 0;
	int centArr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
	}
	else
	{
		while (cent != 0)
		{
			if (cent >= centArr[i])
			{
				cent -= centArr[i];
				coinNum++;
			}
			else
			{
				i++;
			}
		}
		printf("%d\n", coinNum);
	}
	return (0);
}
