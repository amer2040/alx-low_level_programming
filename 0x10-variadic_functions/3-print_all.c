#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: the string seprator
 * @lp: argument pointer
 */
void format_char(char *separator, va_list lp)
{
	printf("%s%c", separator, va_arg(lp, int));
}

/**
 * format_int - formats integer
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_int(char *separator, va_list lp)
{
	printf("%s%d", separator, va_arg(lp, int));
}

/**
 * format_float - formats float
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_float(char *separator, va_list lp)
{
	printf("%s%f", separator, va_arg(lp, double));
}

/**
 * format_string - formats string
 * @separator: the string seprator
 * @ap: argument pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(lp, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: the format string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list lp;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(lp, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, lp);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(lp);
}
