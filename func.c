#include "main.h"

/**
* print_char - fonction
*
*
*/

void print_char(va_list args)
{
	_putchar(va_arg(args char);
}

/**
 *
 *
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char*) // pas sur de char* vs char
	{
		for (i = 0; str[i] != '\n'; i++)
		_putchar(str[i]);
	}
}

/**
 *
 *
 */

void print_int(va_list args)
{

}

/**
 *
 *
 */

void print_double(va_list args)
{

}
