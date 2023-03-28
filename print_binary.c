#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal
 * @b: number to print
 *
 * Return: count(number of text)
 */

void to_binary(unsigned int n, int *len)
{
	if (n / 2)
	{
		to_binary(n / 2, len);
	}
	_putchar((n % 2) + '0');
	++*len;
}

int print_binary(va_list b)
{
	unsigned int d = va_arg(b, unsigned int);
	int len = 0;
	
	to_binary(d, &len);

	return (len);
}
