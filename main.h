#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int printf_char(va_list arguments, int s);
int printf_string(va_list arguments, int s);
int printf_integer(va_list arguments, int s);
int selector(const char *format, va_list arguments, int s);
int printf_binary(unsigned int n, int s);
int _printf(const char *format, ...);
int _x(unsigned int n, int s, int capital_letter);
int printf_octal(unsigned int n, int s);
int printf_unsigned(unsigned int n, int s);
int printf_reverse(va_list arguments, int s);
int printf_pointer(va_list arguments, int s);

#endif
