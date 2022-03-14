#include "main.h"

/**
* print_char - fonction
* @args: param
* Return: void
*/

void print_char(va_list args)
{
	_putchar(va_arg(args, char);
}

/**
 * print_str - fonction
 * @args: param
 * Return: void
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*)
	{
		for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	}
}

/**
 * print_int - fonction
 * @args: param
 * Return: void
 */

void print_int(va_list args)
{
	_putchar(va_arg(args, int);
}

/**
 * print_double - fonction
 * @args: param
 * Return: void
 */

void print_double(va_list args)
{
	_putchar(va_arg(args, double));
}
