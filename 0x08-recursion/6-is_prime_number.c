#include "main.h"

/**
 * prime_s - calculate if it is a prime
 * @r: input
 * @p: divisor
 * Return: Always 0
 */

int prime_s(int r, int p)
{
	if (r <= 1 || (r != p && r % p == 0))
	{
		return (0);
	}
	else if (r == p)
	{
		return (1);
	}
	return (prime_s(r, p + 1));
}
/**
 * is_prime_number - return 1 if the input is a prime number, otherwise 0
 * @n: parameter of the function
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (prime_s(n, 2));
}
