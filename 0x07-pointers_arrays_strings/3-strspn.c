#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: characters counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;
	int m;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		for (m = 0 ; s[j] != accept[m] ; m++)
		{
			if (accept[m] == '\0')
				return (j);
		}
	}
		return (0);
}
