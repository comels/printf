#include "main.h"

/**
* print_char - fonction
* @args: param
* Return: void
*/

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i - 1);
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
		_putchar(45), i++;
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
	return (i);
}
