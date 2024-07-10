#include "main.h"

/**
 * sqrt_s - return the natural square root of a number
 * @r: input number
 * @p: iterator
 * Return: sqaure root or -1
 */

int sqrt_s(int r, int p)
{
	if (p * p == r)
	{
		return (p);
	}
	else if (p * p > r)
	{
		return (-1);
	}
	return (sqrt_s(r, p + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter of the function
 * Return: natural sqaure root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_s(n, 0));
}
