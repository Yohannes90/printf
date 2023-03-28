#include "main.h"

/**
 * print_num - prints integer or double
 * @list: arguments list
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
int print_num(va_list list)
{
        int len;
        int num = va_arg(list, int);

        len = print_number(num);
        return (len);
}

