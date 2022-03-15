#include "main.h"

/**
* print_char - fonction
* @args: param
* Return: void
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - fonction
 * @args: param
 * Return: void
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char*);
	int i;

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (5);
	}

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_d - fonction
 * @args: param
 * Return: void
 */

int print_d(va_list args)
{
	int Div = 1;
	int n;
	int i = 0;

	n = va_arg(args, int);

	if (n == 0)
		_putchar(48), i++;
	else if (n < 0)
	{
		_putchar('-'), i++;
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48), i++;
		n = n % Div;
		Div = Div / 10;
	}
	return (i + 1);
}
