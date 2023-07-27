#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>



int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);

/**
 * struct dt - Structure for holding format specifier and corresponding
 * function.
 * @letter: The format specifier character.
 * @func: A pointer to the function handling the format specifier.
 *
 * Description: This structure defines the mapping between format specifiers
 * and the corresponding functions that handle them in the _printf function.
 */

typedef struct dt
{
	char letter;
	int (*func)(va_list);
} datatype;

#endif
