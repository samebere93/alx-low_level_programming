#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int n, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (n = 0 ; n < l ; n++)
	{
		a[n] = min;
		min++;
	}
	return (a);
}
