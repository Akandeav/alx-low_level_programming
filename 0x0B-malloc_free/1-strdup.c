#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string to copy
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int m, n;
	char *s;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
		;
	m++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < m; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
