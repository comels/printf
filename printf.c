#include "main.h"

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

	struc func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_double},
		{NULL, NULL}
	};
	
	va_start(args, format);


	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
		_putchar (format[i]);
		i++;
		}
		else
		{
			while (*func[j].c != format[i + 1])
			{
				if (
						func[j].f(args);
				j++;
			}
			_putchar('%');
			i++
		}
	}
return(0);		
	

}


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
