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
		num_length += _putchar(45);
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	num_length += _putchar(n % 10 + '0');
	return (num_length);
	

}
int print_num(va_list list)
{
        int len;
        int num = va_arg(list, int);

        len = print_number(num);
        return (len);
}

