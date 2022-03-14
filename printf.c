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
		{"c", print_char}, {"s", print_str},
		{"d", print_d}, {"i", print_i}, {"\0", NULL}
	};

	if (va_arg(args,void *) == NULL)
			return(-1);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		for (j = 0; format[i + 1] != *(func[j].c)
			     && *(func[j].c) != '\0'; j++)
			;
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == '%' || format[i + 1] == '\0')
			_putchar('%'), i++, k++;
		else if (format[i + 1] == *(func[j].c))
			func[j].f(args), i++, k++;
		else
			_putchar(format[i]), _putchar(format[i + 1]), i++, k++;
	}
	va_end(args);
	return (i - k);
}
