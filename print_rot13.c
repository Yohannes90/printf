#include "main.h"

/**
 * print_rot13 - encodes a string using rot13
 * @R: list
 *
 * Return: number of character printed
 */
int print_rot13(va_list R)
{
	int i, j, count;
	char *s;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	count = 0;
	s = va_arg(R, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				_putchar(datarot[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
