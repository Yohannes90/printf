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
	char *str;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	count = 0;
	str = va_arg(R, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; data[i] != '\0'; j++)
		{
			if (str[i] == data[j])
			{
				_putchar(datarot[j]);
				count++;
				break;
			}
		}
	}
	return (count);
}
