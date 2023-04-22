#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - prints anything
 * @format: format of the arguments
 */
int _printf(const char *format, ...)
{
	int count;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			*format++;
			switch (*format)
			{
				case 'c':
					{
						_putchar(va_arg(args, int););
						count++;
						break;
					}
				case 's':
					{
						char *c = va_arg(args, char *);

						while (*c)
						{
							putchar(*c++);
							count++
						}
						break;
					}
				case '%':
					{
						_putchar('%');
						count++;
						break;
					}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
	}
	va_end(args);
	return (count);
}
