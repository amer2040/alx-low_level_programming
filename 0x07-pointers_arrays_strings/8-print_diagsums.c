#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonals
 *
 * @a: Pointer to an array
 *
 * @size: Size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y = 0;
	int z = 0;

	for (x = 0; x < size; x++)
	{
		y += a[x];
		z += a[size - x - 1];
		a += size;
	}
	printf("%d, ", y);
	printf("%d\n", z);
}
