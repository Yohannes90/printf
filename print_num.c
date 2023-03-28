#include "main.h"

/**
 * print_number - prints integer
 * @i: list
 *
 * Return: number of character printed
 */
int print_int(va_list i)
{
	int j, k, count = 0;
	int n = va_arg(i, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
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
 * print_umsigned_int - prints decimal
 * @u: list
 *
 * Return: count of character
 */
int print_unsigned_int(va_list u)
{
	int i, j, k, count;
	unsigned int n;

	i = va_arg(u, int);
	if (i < 0)
	{
		_putchar('-');
		n = i * -1;
		count = 1;
	}
	else
	{
		n = i;
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
