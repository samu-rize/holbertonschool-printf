#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be printed
 *
 * Description: This function writes the character 'c' to the standard output (stdout).
 *              It is used by the _printf function to display the output.
 *
 * Return: On success, returns the character written as an unsigned char cast to an int.
 *         On error, returns EOF.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
