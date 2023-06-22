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
	{
		putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (space = 0; space < p; space++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
