#include "holberton.h"
/**
 * print_line - print line with given length.
 * @n: line length
 */
void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = n; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
