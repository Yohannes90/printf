#include "main.h"

/**
 * printnumber - prints number
 * @n: number to be printed
 *
 * Return: count
 */
int printnumber(int n)
{
	int count;

	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	if (n / 10)
	{
		count++;
		printnumber(n / 10);
	}
	_putchar(n % 10 + '0');
	return (count);
}
/**
 * print_num - prints numbers(i, d)
 * @n: number to print
 *
 * Return: count(number of text)
 */
int print_num(va_list n)
{
	int count, num;

	num = va_arg(n, int);
	count = printnumber(num);
	return (count);
}
