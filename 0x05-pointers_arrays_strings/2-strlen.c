#include "main.h"

/**
 * _strlen - A function that returns length of string
 * @s: character pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	for (;s[len] != '\0'; len++);
	return (len);
}
