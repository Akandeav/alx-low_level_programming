#include "holberton.h"
/**
 * infinite_add - add 2 numbers.
 * @n1: integer to add.
 * @n2: integer to add.
 * @r: buffer in which the addition will be stored.
 * @size_r: the buffer (r) size.
 * Return: a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	/* int s = 0; */
	(void)n1;
	(void)n2;

	for (i = 0; i < size_r; i++)
		r[i] = 0 + 48;
	r[size_r] = '\0';

	return r;
}
