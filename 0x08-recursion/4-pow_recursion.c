#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: parameter 1
 * @y: parameter 2
 * Return: value of a given number passed to the function
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}
