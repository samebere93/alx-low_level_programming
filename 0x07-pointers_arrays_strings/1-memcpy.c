#include "main.h"

/**
 * _memcpy - Function that copy memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
	{
		dest[j] = src[j];
	}
		return (dest);
}
