#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char using malloc.
 *
 * @size: size of bytes
 * @c: character to populate array
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *addr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	addr = malloc(size * sizeof(char));
	if (addr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		addr[i] = c;
	addr[i] = '\0';
	return (addr);
}
