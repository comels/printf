#include "main.h"

/**
 * _printf - maint function
 * @format: main param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	va_list args;

	print func[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_d},
		{"i", print_i},
		{"\0", NULL}
	};

	if (format == NULL)
		return (0);
	va_start(args, format);
	while (format[i] != '\0')
	{
		for (j = 0; format[i + 1] != *(func[j].c)
			     && *(func[j].c) != '\0'; j++)
			;
		if (format[i] != '%')
			_putchar(format[i]), i++;
		else if (format[i + 1] == '%' || format[i + 1] == '\0')
		{
			_putchar('%');
			i += 2, k++;
		}
		else if (format[i + 1] == *(func[j].c))
		{
			func[j].f(args);
			i += 2, k++;
		}
		else
		{
			_putchar(format[i]);
			_putchar(format[i + 1]);
			i += 2, k++;
		}
	}
	va_end(args);
	return (i - k);
}
