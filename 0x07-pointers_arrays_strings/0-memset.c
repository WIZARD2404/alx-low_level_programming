#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @b: Const
 * @n: counter
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i]= b;
		i++;
	}

	return (s);
}
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
