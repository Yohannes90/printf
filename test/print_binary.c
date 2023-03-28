#include "main.h"
/**
 * print_binary -converts unsigned int to binary
 * @b: list of arguments
 * Return: number of character printed
 *NOT YET COMPLETE
 */


void to_binary(unsigned int n)
{
	if (num / 2)
	{
		to_binary(num / 2, len);
	}
	_putchar((num % 2) + '0');
	++*len;
}
int print_binary(va_list b)
{
	unsigned int num = va_arg(b, unsigned int);
	int len = 0;
	to_binary(num, &len);

	return (len);
}
