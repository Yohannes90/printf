#include "main.h"

/**
 * print_char - print a character to the console
 * @c: char to print
 *
 * Return: 1(number of printed char)
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
