#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: char input
 *
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * write_char - prints char
 * @args: char input
 *
 * Return: number of char to be printed
 */

int write_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * write_str - prints string
 * @args: string input
 *
 * Return: number of char to be printed
 */


int write_str(va_list args)
{
	int len;
	char *str = va_arg(args, char *);

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 1;
	}

	return (len);

}

/**
 * write_percent - prints percent sign
 * @args: no parameter
 *
 * Return: number of char to be printed
 */

int write_percent(va_list args __attribute__((unused)))
{
	_putchar('%');

	return (1);
}

