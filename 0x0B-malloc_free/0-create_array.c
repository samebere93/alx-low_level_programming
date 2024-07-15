#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters then initialize
 * @size: an imput for the size of the arrays
 * @c: to store strings of character
 * Return: a pointer to the base character c
 */

char *create_array(unsigned int size, char c)
{
	size_t k;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0 ; k < size ; k++)
	{
		ptr[k] = c;
	}
	return (ptr);
}
