#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program
 * @ac: arguement counts
 * @av: argument vetor
 * Return: a pointer to the array of character
 */

char *argstostr(int ac, char **av)

{
	char *aout;
	int m, n, p = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] ; n++)
			len++;
	}
	len += ac;
	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	for (m = 0 ; m < ac ; m++)
	{
		for (n = 0 ; av[m][n] ; n++)
		{
			aout[p] = av[m][n];
			p++;
		}
		if (aout[p] == '\0')
		{
			aout[p++] = '\n';
		}
	}
	return (aout);

}
