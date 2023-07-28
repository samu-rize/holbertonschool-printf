#include "main.h"
/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_decimal - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_decimal(va_arg list)
{
	int d = 1, len = 0, number = va_arg(list, int);
	unsigned int tmp;

	tmp = number;
	if (number < 0)
	{
		_write_char('-');
		tmp = -number;
		len++;
	}
	while (tmp / d > 9)
	{
		d *= 10;
	}
	while (d != 0)
	{
		_write_char(tmp / d + '0');
		tmp %= d;
		len++;
		d /= 10;
	}
	return (len);
}
