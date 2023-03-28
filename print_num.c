#include "main.h"

/**
 * print_num - prints numbers(i, d)
 * @n: number to print
 *
 * Return: count(number of text)
 */
int print_numbers(int x)
{
	unsigned int i;
	int len = 0;
	if (x < 0)
	{
		len += _putchar(45);
		i = -x;
	}
	i = x;
	if (i / 10)
	{
		print_numbers(i / 10);
	}
	len += _putchar(i % 10 + '0');
	return (len);
}
int print_num(va_list n)
{
	int count, l;
	l = va_arg(n, int);

	count = print_numbers(l);
	return (count);
	/*
	  int num, count, power, digit, temp;

	count = digit = 0;
	power = 1;
	num = va_arg(n, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}
	temp = num;
	while (temp > 9)
	{
		temp /= 10;
		power *= 10;
	}
	while (power > 0)
	{
		digit = num / power;
		_putchar(digit + '0');
		num -= digit * power;
		power /= 10;
		count++;
	}
	return (count - 1);
	*/

}
