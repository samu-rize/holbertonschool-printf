#include "main.h"

/**
 * print_char - Prints a character from a va_list argument.
 * @arg: The va_list argument containing the character to be printed.
 *
 * Description: This function is used by the _printf function to handle
 * the '%c'
 * format specifier and print a character from a va_list argument.
 *
 * Return: The number of characters printed (always 1).
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_string - Prints a string from a va_list argument.
 * @arg: The va_list argument containing the string to be printed.
 *
 * Description: This function is used by the _printf function to handle the
 * '%s'
 * format specifier and print a string from a va_list argument.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list arg)
{
	unsigned int i = 0;
	char *s;

	s = va_arg(arg, char *);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percent symbol.
 * @arg: The va_list argument (unused for this function).
 *
 * Description: This function is used by the _printf function to handle the
 * '%%'
 * format specifier and print a percent symbol.
 *
 * Return: The number of characters printed (always 1).
 */

int print_percent(va_list arg)
{
	(void)arg;
	_putchar('%');
	return (1);
}
