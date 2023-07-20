#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list lp;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(lp, n);
	while (i--)
		printf("%d%s", va_arg(lp, int),
			i ? (separator ? separator : "") : "\n");
	va_end(lp);
}
