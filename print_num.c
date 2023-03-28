#include "main.h"

/**
 * print_int - prints integer, decimal
 * @i: list
 *
 * Return: number of character printed
 */
int print_int(va_list i)
{
	int j, k, n, count;
	int l = va_arg(i, int);

	if (l < 0)
	{
		_putchar('-');
		n = l * -1;
		count = 1;
	}
	else
	{
		n = l;
		count = 0;
	}
	j = 1;
	while (n / j > 9)
	{
		j *= 10;
	}
	while (j != 0)
	{
		k = n / j;
		_putchar(k + '0');
		n %= j;
		j /= 10;
		count++;
	}
	return (count);
}

/**
 * print_unsigned_int - prints decimal
 * @u: list
 *
 * Return: count of character
 */
int print_unsigned_int(va_list u)
{
	int count = 0;
	unsigned int j, k, n;

	n = va_arg(u, unsigned int);
	j = 1;
	while (n / j > 9)
	{
		j *= 10;
	}
	while (j != 0)
	{
		k = n / j;
		_putchar(k + '0');
		n %= j;
		j /= 10;
		count++;
	}
	return (count);
}
