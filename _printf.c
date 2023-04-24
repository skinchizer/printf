#include <stdarg.h>
#include "main.h"
/**
 * _printf - my printf
 * @format: list of formats
 * Return: printed characters number
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0;

	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(list);
			else if (format[i] == 's')
				count += print_string(list);
			else if (format[i] == '%')
				count += print_percent();
			else
			{
				_putchar('%');
				if (format[i] != '\0')
					_putchar(format[i]);
				else
					return (-1);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
