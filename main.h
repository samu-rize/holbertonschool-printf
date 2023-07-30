#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct control - defines a structure for symbols and functions
*
* @symbol: The operator
* @f: The function associated
*/
struct control
{
	char *symbol;
	int (*f)(va_list);
};
typedef struct control switcher;

/*Main functions*/
int ninja_Fun(const char *format, switcher f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_decimal(va_list list);


#endif
