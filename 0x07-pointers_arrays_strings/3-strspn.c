#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string.
 * @accept: the bytes to accept.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *p;
	for (n = 0 ; *s ; s++, n++)
	{
		for (p = accept ; *p && *p != *s ; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}
