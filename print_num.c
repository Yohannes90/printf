#include "main.h"

/**
 * print_num - prints numbers(i, d)
 * @n: number to print
 *
 * Return: count(number of text)
 */
int print_num(va_list n)
{
	int len, pow, j, digit, i, count, num;

	count = 0;
	i = num = va_arg(n, int);
	if (i != 0)
	{
		if (i < 0)
		{
			_putchar('-');
			count++;
		}
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		pow = 1;
		for (j = 1; j < len; j++)
			pow *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = i / pow;
			if (i < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			i -= digit * pow;
			pow /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
