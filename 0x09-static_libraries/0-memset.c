#include "main.h"

/**
 * _memset - Function that fills memory with a contant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
	{
		s[j] = b;
	}
		return (s);
}
