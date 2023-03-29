#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriaterly.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	buf[i++] = c;
	if (i == 1024 || c == '\n')
	{
		(write(1, buf, i));
		i = 0;
	}
	return (1);
}
