#ifndef _PRINTF_
#define _PRINTF_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct func - fonction
 * @c: caractère
 * @f: fonction
 */
typedef struct func
{
	char *c;
	void (*f)(va_list args);
} print;

int _printf(const char *format, ...);
int _putchar(char c);
void print_str(va_list args);
void print_d(va_list args);
void print_i(va_list args);
void print_char(va_list args);

#endif
