#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>



int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);


typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;


datatype choice[] =
{
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
};


#endif
