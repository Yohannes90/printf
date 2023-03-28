#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> c2788960baf8e1203418b4826613879aa3dc7e42
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
