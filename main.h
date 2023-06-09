#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct ch - Struct ch
 *
 * @conv_spec: the specifier
 * @func: the function associated
 */
typedef struct ch
{
	char *conv_spec;
	int (*func)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_printf_func(const char *format))(va_list);
int print_char(va_list c);
int print_string(va_list s);
int print_num(va_list n);
int print_binary(va_list b);

int print_reverse(va_list r);
int print_rot13(va_list R);

#endif /* MAIN_H */
