#include "main.h"

/**
 * print_binary -converts unsigned int to binary
 * @b: list of arguments
 * Return: number of character printed
 *NOT YET COMPLETE
 */


int to_binary(unsigned int n)
{
	int count = 0
	
	if (n == 0)
	{
		count += _putchar('0');
		
	}
	if (n % 2)
	{
		to_binary(n / 2);
	}
	return (count);

}
int print_binary(va_list b)
{
	unsigned int num = va_arg(b, unsigned int);
	int len = to_binary(num);

	return (len);
}
