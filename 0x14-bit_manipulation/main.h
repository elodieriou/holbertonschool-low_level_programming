#ifndef DEF_BIT
#define DEF_BIT

#include <stddef.h>
int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif