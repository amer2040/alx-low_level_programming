#include "main.h"

/**
 * print_sign - print the sign of number
 *
 * @n: the number
 *
 * Return: 1 (is greater that zero) or 0 (is zero)
 * or -1 (is less that zero)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
