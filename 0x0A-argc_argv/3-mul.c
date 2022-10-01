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
	int i = 0;
	int mul = 1;
	int val = 0;
	char err[] = "Error";

	if (argc != 3)
	{
		while (err[i] != '\0')
		{
			_putchar(err[i]);
			i++;
		}
		_putchar('\n');
		return (0);
	}
	i = 1;
	argc--;
	while (argc--)
	{
		val = 0;
		while (*argv[i] != '\0')
		{
			/*_putchar(*argv[i]);*/
			val = (val * 10) + (*argv[i] - '0');
			*argv[i]++;
		}
		mul *= val;
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
