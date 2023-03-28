#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal
 * @b: number to print
 *
 * Return: count(number of text)
 */

int to_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
	{
		count += to_binary(n / 2);
	}
	count += _putchar((n % 2) + '0');
	return (count);
}

int print_binary(va_list b)
{
	unsigned int d = va_arg(b, unsigned int);
	int len = to_binary(d);

	return (len);
}
