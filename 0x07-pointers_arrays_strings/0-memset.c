#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i = 0;
        while(i < n)
        {
                *(s + i) = b;
                i++;
        }
        return (s);
}
