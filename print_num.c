#include "main.h"

/**
 * print_number - prints integer or double
 * @n: number to be printed
 *
 * Return: number of character printed
 */
int print_number(int n)
{
	/*
	 * unsigned int i = n;
	 */
	int num_length = 0;

	if (n < 0)
	{
		_putchar('-');
		num_length++;
		n = -n;
	}
	if (n / 10)
	{
		num_length += print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	return (num_length + 1);
}
/**
 * print_decimal - prints decimal
 * @d: list
 *
 * Return: length
 */
int print_decimal(va_list d)
{
	int len;
	int num = va_arg(d, int);

	len = print_number(num);
	return (len);
}
/**
 * print_int - prints integer
 * @i: list
 *
 * Return: length
 */
int print_int(va_list i)
{
	int len;
	int num = va_arg(i, int);

	len = print_number(num);
	return (len);
}
