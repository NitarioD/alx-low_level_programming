#ifndef MAIN
#include <stddef.h>
#define MAIN

void print_name(char *name, void (*f)(char *));
int _putchar(char ch);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
