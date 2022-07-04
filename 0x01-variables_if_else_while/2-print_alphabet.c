#include <stdio.h>

/**
 * main - Print all the alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char chs;

	for (chs = 'a'; chs <= 'z'; chs++)
		putchar(chs);

	putchar('\n');
	return (0);
}
