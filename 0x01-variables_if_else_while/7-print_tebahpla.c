#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the lowercase alphabet in reverse,
 *  followed by a new line.
 *
 *  Return: 0 (Success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
