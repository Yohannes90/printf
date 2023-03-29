#include "main.h"
#include <unistd.h>

/**
 * _printf - Printf function
 * @format: inital string that tell us what is going to be printed
 * Return: the amount of times we write to stdout
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	int (*f)(va_list);
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (format[i] == '\0')
			return (count);
		f = get_printf_func(&format[i + 1]);
		if (f != NULL)
		{
			count += f(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (count);
}
