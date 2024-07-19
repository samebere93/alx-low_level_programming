#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - Function that concatenates two string
 * @s1: string 1 parameter
 * @s2: string 2 parameter
 * @n: number of element to concatenates
 * Return: a pointer to the new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t p, q, r;
	char *s;

	if (s1 == NULL)
		p = 0;
	else
	{
		for (p = 0 ; s1[p] != '\0' ; p++)
			;
	}
	if (s2 == NULL)
		q = 0;
	else
	{
		for (q = 0 ; s2[q] != '\0' ; q++)
			;
	}
	if (q > n)
		q = n;
	s = malloc(sizeof(char) * (p + q + 1));
	if (s == NULL)
		return (NULL);
	for (r = 0 ; r < p ; r++)
		s[r] = s1[r];
	for (r = 0 ; r < q ; r++)
		s[r + p] = s2[r];
	s[p + q] = '\0';
	return (s);
}
