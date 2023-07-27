#include "main.h"

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string containing format specifiers.
 * @...: Additional arguments depending on format specifiers.
 *
 * Description: This function is a custom implementation of the printf function
 * that supports the following format specifiers: '%c' for characters,
 * '%s' for strings, and '%%' to print a percent symbol.
 * It prints the formatted output to the standard output.
 *
 * Return: The total number of characters printed (excluding the null byte
 *         used to end output to strings) or -1 if an error occurs.
 */

int _printf(const char *format, ...)
{
	int i = 0, j, n = 1;

	va_list arg;

	datatype choice[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (choice[j].letter != '\0')
			{
				if (choice[j].letter == format[i + 1])
				{
					n += choice[j].func(arg);
					i += 2;
				}
				j++;
			}
		}
		_putchar(format[i++]);
		n++;
	}
	va_end(arg);
	return (n);
}