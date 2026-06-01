#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @ap: list of arguments
 * @sep: separator
 */
void print_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * print_int - prints an integer
 * @ap: list of arguments
 * @sep: separator
 */
void print_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: list of arguments
 * @sep: separator
 */
void print_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: list of arguments
 * @sep: separator
 */
void print_string(va_list ap, char *sep)
{
	char *str;

	str = va_arg(ap, char *);
	if (!str)
		str = "(nil)";
	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char *sep;
	char types[] = "cifs";

	void (*func[])(va_list, char *) = {
		print_char,
		print_int,
		print_float,
		print_string
	};

	va_start(ap, format);
	i = 0;
	sep = "";

	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				func[j](ap, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
