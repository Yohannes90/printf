#include "main.h"

/**
 * print_num - prints integer or double
 * @list: arguments list
 * Return: number of character printed
 */

int print_num(va_list list)
{
	int len;
	int num = va_arg(list, int);

	len = printnumber(num);
	return (len);
}

int printnumber(int n)
{
	unsigned int i = n;
	int num_length = 0;

	if (n < 0)
	{
		num_length += _putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	num_length += _putchar(i % 10 + '0');
	return (num_length);
	

}
