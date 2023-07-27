#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: input to be checked
 *
 * Return: byte count, otherwise -1 if error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int char_printed; /* store number of char printed */
	int (*p)(va_list); /* store function pointer */

	i = 0;
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}

	va_start(args, format);
	i = 0;
	char_printed = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			p = get_write_func(format[i + 1]);
			if (p == NULL)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				char_printed = char_printed + 2;
			}
			else
			{
				char_printed = char_printed + (*p)(args);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			char_printed = char_printed + 1;
		}
		i = i + 1;
	}
	va_end(args);
	return (char_printed);
}
