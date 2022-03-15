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
	int (*f)(va_list args);
} print;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list args);
int print_d(va_list args);
int print_char(va_list args);
int func_print(char j, va_list args);

#endif
