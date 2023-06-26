#include "main.h"

/**
 * print_rev - prints reversed
 *
 * @s: pointer to the strig to print
 *
 * Return: void
*/

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
