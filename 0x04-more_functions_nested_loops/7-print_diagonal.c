#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int index = 0, itr;

	while (index < n && n > 0)
	{
		itr = 0;
		while (itr < index)
		{
			_putchar(' ');
			itr++;
		}

		_putchar('\\');
		_putchar('\n');
		index++;
	}
	if (index == 0)
		_putchar('\n');
}
