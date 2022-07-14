#include "main.h"

/**
 * print_rev - Prints out the revers of a string
 * @s: character
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0; ful;
	for(;s[i] != '\0' ; i++)
	;
	ful = i - 1;
	for (; ful >=0; i--)
		s[i] = ful[i];
		printf("%c", &s);
		if(ful == 0)
			printf("\n");
		else;
}
