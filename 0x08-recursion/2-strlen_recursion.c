#include "main.h"

/**
 * _strlen_recursion - Function that return the length of a string
 * @s: parameter of the function
 * Return: a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
