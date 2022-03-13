#include "main.h"


/**
* print_char - fonction
*
*
*/

void print_char(va_list args)
{
	_putchar(va_arg(args char);
}

/**
 *
 *
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*) // pas sur de char* vs char
	{
		for (i = 0; str[i] != '\n'; i++)
		_putchar(str[i]);
	}
}

/**
 *
 *
 */

void print_int(va_list args)
{

}

/**
 *
 *
 */

void print_doublr(va_list args)
{

}


/**
 * _printf - maint function
 * @format: main param
 * Return : int
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;

	print func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_double},
		{NULL, NULL}
	};
	
	va_start(args, format);


	while (format[i] != '\0' && format[i] != '%')
	{
		_putchar (format[i]);
		i++;
	}
		else
			i++;

		while (func[j].c != format[i + 1])
			j++;

		if (func[j].f(args) == format[i])
		{
			_putchar('%');
			func[j].f(args);
		}

}
