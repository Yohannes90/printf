#include "main.h"

/**
 * print_reverse - prints string in reverse
 * @r: list
 *
 * Return: number of characters
 */
int print_reverse(va_list r)
{
	char *str;
	int i, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
