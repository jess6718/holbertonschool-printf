#ifndef FUNCTION_HEADER
#define FUNCTION_HEADER
#include <stdarg.h>

/**
 * struct type_func - struct type to match data type
 *
 * @specifier: the data types
 * @f: The function associated
 */

typedef struct type_func
{
	const char specifier;
	int (*f)(va_list);
} write_t;

int _putchar(char c);
int _printf(const char *format, ...);
int write_char(va_list args);
int write_str(va_list args);
int write_percent(va_list args __attribute__((unused)));
int write_number(va_list args);
int (*get_write_func(char s))(va_list);

#endif
