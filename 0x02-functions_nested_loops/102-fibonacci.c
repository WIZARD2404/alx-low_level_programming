#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, n;
	x = 1, y = 2;
	printf("%d, ", x);
	printf("%d, ", y);
	for(int i = 0; i < 50; i++)
	{
		n = x + y;
		printf("%d", n);
		x = y;
		y = n;
		n = x + y;
	}
	return (0);
}
