#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>
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
}
/**
 * print_d - prints integer
 * @arg: list of formats
 * Return: printed integers
 */
int print_d(va_list arg)
{
	int n = va_arg(arg, int);
	int divisor = 1, count = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= 1;
		count++;
	}
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor != 0) {
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
		count++;
	}
	return (count);
}
