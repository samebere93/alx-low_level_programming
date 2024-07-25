#include "variadic_functions.h"

/**
 *  print_numbers - Function that print number followed by a new line
 *  @separator: string to be printed btwn numbers
 *  @n: number of ints to print
 *  Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k, arr;

	va_list ptr;

	va_start(ptr, n);

	for (k = 0 ; k < n ; k++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
