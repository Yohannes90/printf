#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal
 * @b: number to print
 *
 * Return: count(number of text)
 */

int to_binary(unsigned int n)
{
	if (n / 2)
	{
		to_binary(n / 2, len);
	}
	_putchar((n % 2) + '0');
}

int print_binary(va_list b)
{
	unsigned int d = va_arg(b, unsigned int);
	int len = 0;
	
	to_binary(d, &len);

	return (len);
}
