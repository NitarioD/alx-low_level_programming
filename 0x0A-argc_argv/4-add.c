#include "main.h"

/**
 * check_num - checks if arguments contain only digits.
 *
 * @argv: arguments
 * Return: int
 */
int check_num(char *argv)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(argv);
	while (i < len)
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (argv[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - program that adds positive numbers.
 *
 * @argc: number
 * @argv: array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = check_num(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
