#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list format);
int print_string(va_list format);
int print_percent(void);
int print_d(va_list arg);
#endif
