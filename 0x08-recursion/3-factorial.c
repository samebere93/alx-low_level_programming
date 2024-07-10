#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: parameter of the function
 * Return: a given factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
