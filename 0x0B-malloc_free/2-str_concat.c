#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: input parameter 1
 * @s2: input parameter 2
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)

{
	size_t len1, len2, k, r;
	char *ptr;

	if  (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (k = 0 ; k < len1 ; k++)
	{
		ptr[k] = s1[k];
	}
	for (r = 0 ; r <= len2 ; r++)
	{
		ptr[k] = s2[r];
		k++;
	}
	return (ptr);
}
