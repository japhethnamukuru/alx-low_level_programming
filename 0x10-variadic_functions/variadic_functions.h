#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - datatype
 *
 * @letter: char
 *
 * @func: function pointer
 */

typedef struct dt
{
	char letter;
	void (*func)(va_list);
}datatype;

void print_c(va_list c);
void print_n(va_list n);
void print_s(va_list s);
void print_fl(va_list f);
#endif
