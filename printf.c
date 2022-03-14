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
			i++;
			for (j = 0; format[i] == func[j].c; j++)
			{
				func[j].f(args);
			}
		}
	}
va_end(args);	
return(0);		
	
}
