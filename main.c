#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_printf("%c\n", 's');
	_printf("%c\n", 'e');

	_printf("%%\n");

	_printf("%s\n", "9");
	_printf("%s\n", "this will work");
	_printf("%r\n", "this will work");
	_printf("%R\n", "AaBbCcNnOoPp");

	_printf("%d\n", 121);
	_printf("%d\n", -43430);
	_printf("%d\n", 98);

	_printf("%i\n", -291);
	_printf("dfsdfsf%i\n", 1);
	return (0);
}
