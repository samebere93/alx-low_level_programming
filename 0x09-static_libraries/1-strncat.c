#include "main.h"

/**
 * _strncat - function that concatenate two string apending only the n bytes
 * @dest: value 1
 * @src: value 2
 * @n: value 3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0 ; i < n && *src != '\0'; i++)
{
	dest[len + i] = *src;
	src++;
}
	dest[len + i] = '\0';
	return (dest);
}
