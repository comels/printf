#ifndef _PRINTF_
#define _PRINTF_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct func{
	char*c;
	void (f*)(va_list args);
} struct;

int _printf(const char *format, ...);
int _putchar(char c);

#endif
