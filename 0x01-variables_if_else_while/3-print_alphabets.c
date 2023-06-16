#include <stdio.h>

/**
 * main - entry point
 *
 * Description:Write a program that prints the alphabet in lowercase,
 * and then in uppercase,followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
