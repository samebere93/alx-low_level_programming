#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimentional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to an array of integers
 */

int **alloc_grid(int width, int height)

{
	int k, r;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (k = 0 ; k < height ; k++)
	{
		gridout[k] = malloc(width * sizeof(int));
		if (gridout[k] == NULL)
		{
			for (k-- ; k >= 0 ; k--)
			free(gridout);
			free(gridout[k]);
			return (NULL);
		}
	}
	for (k = 0 ; k < height ; k++)
		for (r = 0 ; r < width ; r++)
			gridout[k][r] = 0;
	return (gridout);
}
