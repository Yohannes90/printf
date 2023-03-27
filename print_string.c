#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 54088cd0652b8b8bc1eb20e5d23785d0db758974
/**
 * print_string - prints string
 * @s: string to be printed
 *
 * Return: number of characters printed
 */
int print_string(va_list s)
{
	char *str;
	int i = 0;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
