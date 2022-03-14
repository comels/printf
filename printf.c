#include "main.h"

/**
 * _printf - maint function
 * @format: main param
 * Return : int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int j;
	va_list args;

	print func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_double},
		{"\0", NULL}
	};

	if (format == NULL)
		return (0);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		else
		{
			for (j = 0; format[i + 1] != *func[j].c
				     || format[i + 1] != '\0'; j++)
			{
				if (format[i + 1] == *(func[j].c))
				{
					func[j].f(args);
					i++;
				}
			}
		}
	}
	va_end(args);
	return(i);
}
