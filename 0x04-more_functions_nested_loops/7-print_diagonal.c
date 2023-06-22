#include "main.h"

/**
 * print_diagonal - print diagonal line
 *
 * @n: is the number of times the \ printed
*/

void print_diagonal(int n)
{
	int p, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (space = 1; space <= p; space++)
				_putchar(' ');
			_putchar(92); /*92 is '\' in ASCII*/
			_putchar('\n');
		}
	}
}
