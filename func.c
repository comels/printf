#include "main.h"

/**
* print_char - fonction
* @args: param
* Return: void
*/

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_str - fonction
 * @args: param
 * Return: void
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * print_int - fonction
 * @args: param
 * Return: void
 */

void print_d(va_list args)
{
	int Div = 1;
	int n;

	n = va_arg(args, int);

	if (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48);
		n = n % Div;
		Div = Div / 10;
	}
}

/**
 * print_double - fonction
 * @args: param
 * Return: void
 */

void print_i(va_list args)
{
	int Div = 1;
	int n;

	n = va_arg(args, int);

	if (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48);
		n = n % Div;
		Div = Div / 10;
	}
}
