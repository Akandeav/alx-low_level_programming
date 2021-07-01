#include "holberton.h"
/**
 * print_number - print numbers
 * @x: integer
 */
void print_number(int x)
{
	unsigned int div = 1;

	if (x < 0)
	{
		x *= -1;
		_putchar('-');
	}
	while (x / div >= 10)
	{
		div *= 10;
	}
	for (; div >= 1; div /= 10)
	{
		_putchar(x / div + '0');
		x = x % div;
	}
}
