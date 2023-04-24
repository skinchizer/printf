#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list format);
int print_string(va_list format);
int print_percent(void);

#endif 
