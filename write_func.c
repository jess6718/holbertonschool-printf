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

	if (str == (char *)0)
	{
		str = "(null)";
	}

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

/**
 * write_number - write a number passed to the function
 * @args - arguement list passed in
 * Return: number of characters printed
 */
int write_num(va_list args)
{
        int i, j, count, n;
        unsigned int abs_num;
        int div = 1;

        n = va_arg(args, int);
        count = 0;
        if (n < 0)
        {
                abs_num = n * (-1);
                count = count + _putchar('-');
        }
        else
        {
                abs_num = n;
        }

        i = 0;
        while (abs_num / div > 9)
        {
                div = div * 10;
                i = i + 1;
        }
        j = 0;
        while (div != 0)
        {
                count = count + _putchar('0' + abs_num / div);
                abs_num = abs_num % div;
                div = div / 10;
                j = j + 1;
        }
        return (count);
}
