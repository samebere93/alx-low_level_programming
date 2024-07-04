#include "main.h"

/**
 * reverse_array - function that reverse the content of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
int j;

for (i = 0 ; i < n / 2 ; i++)
{
	j = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = j;
}
}
