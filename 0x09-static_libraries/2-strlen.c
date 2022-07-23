#include "main.h"

/**
 * _strlen - A function that returns length of string
 * @s: a character pointer
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	;
	return (i);
}
