#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that return a pointer to a newly allocated space
 * @str: input parameter
 * Return: pointer to the memory allocated
 */

char *_strdup(char *str)
{
	size_t k, r;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	strdout = (char *)malloc(sizeof(char) * (k + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (r = 0 ; r <= k ; r++)
	{
		strdout[r] = str[r];
	}
	return (strdout);
}
