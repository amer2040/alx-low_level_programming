#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the letters except q and e, using putchar only.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
