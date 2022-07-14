#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swap two integers
 * @a: a pointer
 * @b: a pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
