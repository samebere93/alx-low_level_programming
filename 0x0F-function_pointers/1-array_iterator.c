#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a paramter
 *                  on each element of the array
 * @array: the array
 * @size: size of the array
 * @action: function to perforn on each element of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0 ; k < size ; k++)
		action(array[k]);
}
