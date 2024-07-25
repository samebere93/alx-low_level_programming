#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - the function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of the matxched character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (j = 0 ; j < size ; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}
