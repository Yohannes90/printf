#include "main.h"
/*
 * print_string - prints string
 * @s: string to be printed
 *
 * Return: 1;
 */
int print_string(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);
	if (str == NULL) 
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
