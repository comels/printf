#include "main.h"

/**
 * _printf - maint function
 * @format: main param
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, n = 0;
	va_list args;

	print func[] = {
		{"c", print_char}, {"s", print_str},
		{"d", print_d}, {"i", print_d}, {"\0", NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n++;
		}
		else if (format[i + 1] == '\0' || format[i + 1] == '%')
			_putchar('%'), i++, n++;
		else
		{
			j = 0;
			while (*(func[j].c) != '\0')
			{
				if (format[i + 1] == *(func[j].c))
				{
					n += func[j].f(args);
					i++;
				}
				j++;
			}
			if (*(func[j].c) == '\0')
			{
				_putchar(format[i]), n++;
				_putchar(format[i + 1]), n++;
			}
		}
	}
	va_end(args);
	return (n);
}
