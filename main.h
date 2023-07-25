#ifndef FUNCTION_HEADER
#define FUNCTION_HEADER

/**
 * struct type - struct type to match data type
 *
 * @f_type: the data types
 * @f: The function associated
 */

typedef struct type
{
	char *f_type;
	void (*f) (va_list args);
} type;

int _printf(char format);
char write_c(char);

#endif
