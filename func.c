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
		return (6);
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
/**
int print_d(va_list args)
{
	int Div = 1;
	int n;
	int i = 0;
	unsigned int x = 0;
	int max; 

	n = va_arg(args, int);
	x = n;

	if (n == 0)
		_putchar(48), i++;
	else if (n < 0)
	{
		_putchar('-'), i++;
		x = n * -1;
	}
	while (x / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((x / Div) + 48);
		i++;
		x = x % Div;
		Div = Div / 10;
	}
	return (i);
}*/

int print_d(va_list valist)
{
	unsigned int m;
	int n, i, k, digits = 0;

	n = va_arg(valist, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		digits++;
	}
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		digits++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	digits++;
	return (digits);
}

