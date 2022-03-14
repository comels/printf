#ifndef _PRINTF_
#define _PRINTF_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct func{
	char *c;
	void (*f)(va_list args);
} struct;

int _printf(const char *format, ...);
int _putchar(char c);
void print_str(va_list args);
void print_int(va_list args);
void print_double(va_list args);
void print_char(va_list args);

#endif
