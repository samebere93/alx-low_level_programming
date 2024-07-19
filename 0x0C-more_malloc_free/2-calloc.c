#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, malloc
 * @nmemb: no of bloc of the memory
 * @size: size of the element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (k = 0 ; k < (nmemb * size) ; k++)
		p[k] = 0;
	return (p);
}
