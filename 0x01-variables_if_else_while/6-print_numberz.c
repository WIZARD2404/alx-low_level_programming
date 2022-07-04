#include <stdio.h>

/**
 * main - print using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar("\n");
	return (0);
}
