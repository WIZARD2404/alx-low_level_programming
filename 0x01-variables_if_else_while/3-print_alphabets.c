#include <stdio.h>

/**
 * main - Prints Upper and lower case alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
