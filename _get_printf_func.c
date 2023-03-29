#include "main.h"

/**
 * get_printf_func - select corresponding functon to format specified
 * @format: given format
 *
 * Return: pointer to corresponding function of format specifier
 */
int (*get_printf_func(const char *format))(va_list)
{
	unsigned int i = 0;
	print_t format_spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_num},
		{"i", print_num},
		{"b", print_binary},
		{"R", print_rot13},
		{NULL, NULL}
	};
	while (format_spec[i].conv_spec)
	{
		if (format_spec[i].conv_spec[0] == (*format))
		{
			return (format_spec[i].func);
		}
		i++;
	}
	return (NULL);
}
