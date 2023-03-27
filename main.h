#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

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
int print_int(va_list list);

#endif /* MAIN_H */
