#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_char - prints a character
 * @format: list of formats
 * Return: the character
 */
int print_char(va_list format)
{
	char c = _putchar(va_arg(format, int));

	return (c);
}
/**
 * print_string - prints a string
 * @format: list of formats
 * Return: printed chars
 */
int print_string(va_list format)
{
	char *str = va_arg(format, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_percent - prints a percentage sign
 * Return: printed chars
 */
int print_percent(void)
{
	return (_putchar('%'));
}//functions
