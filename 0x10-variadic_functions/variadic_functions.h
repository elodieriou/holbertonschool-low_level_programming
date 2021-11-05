#ifndef DEF_VARIADICFUNCTION
#define DEF_VARIADICFUNCTION

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_str(char *separator, va_list args);
/**
 * struct type - Struct that give a type
 *
 * @type: a type
 * @f: the function associate
 */
typedef struct type
{
	char *type;
	void (*f)(char *separator, va_list args);
} type_t;
#endif
