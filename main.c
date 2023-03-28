#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c;
	_printf("%c\n", 's');
	_printf("%c\n", 'e');
	_printf("%%\n");
	_printf("%s\n", "9");
	_printf("%s\n", "this will work");
	_printf("%c\n", 's');
	a =_printf("%d\n", 121);
	_printf("%d\n", a);
	b = _printf("%i\n", -291);
	_printf("%i\n", b);
	c = _printf("%i\n", 10000);
	_printf("%d\n", c);
	_printf("%d\n", -43430);
/*	_printf("%u\n", 430);*/
	_printf("%b\n", 98);
	return (0);
}
