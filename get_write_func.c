#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_write_func - pointer to a function that matches inputn
 *
 * @s: string of the format specifier
 *
 * Return: pointer to function otherwise NULL (error)
 */
int (*get_write_func(char s))(va_list)
{
	write_t types[] = {
		{'c', write_char},
		{'s', write_str},
		{'%', write_percent},
		{'\0', NULL}
	};

	int i;

	i = 0;
	while (types[i].f != NULL)
	{
		if (types[i].specifier == s)
		{
			return (types[i].f);
		}
		i = i + 1;
	}
	return (NULL);
}
