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

	struct func[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_double},
		{NULL, NULL}
	};

	if (format == NULL)
		return (NULL);

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
			for (j = 0; format[i + 1] != func[j].c || format[i + 1] != NULL; j++)
			{
				if (format[i + 1] == func[j].c
						func[j].f(args);
			}
		}
	}
va_end(args);	
return(0);		
	
}
