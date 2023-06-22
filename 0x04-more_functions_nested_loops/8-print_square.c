#include "main.h"

/**
 * print_square - print a square using the char #
 *
 * @size: is the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	int ro, co;

	for (ro = 0; ro < size; ro++)
	{
		for (co = 0; co < size; co++)
			_putchar(35);
		_putchar('\n');
	}
}
