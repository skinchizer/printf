#include <stdarg.h>
#include <stddef.h>
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

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(list);
					break;
				case 's':
					count += print_string(list);
					break;
				case '%':
					count += print_percent();
					break;
				case '\0':
					return (-1);
				default:
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
