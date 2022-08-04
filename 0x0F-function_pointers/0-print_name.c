#include <stdio.h>
#include "main.h"
/**
 * print_name -  a function that prints a name
 * @name: Name
 * @f: Pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
