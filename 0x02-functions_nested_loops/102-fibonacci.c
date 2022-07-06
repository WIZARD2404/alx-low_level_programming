#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x, y, n;
	int i = 0;

	x = 1, y = 2;

	printf("%ld, ", x);
	printf("%ld", y);
	for ( ; i < 48; ++i)
	{
		n = x + y;
		printf(", ");
		printf("%ld", n);

		x = y;
		y = n;
		n = x + y;
		if ((i == 47))
			printf("\n");
	}
	return (0);
}
