#ifndef VARFUN_H
#define VARFUN_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void strFunc(va_list list);
void charFunc(va_list list);
void floatFunc(va_list list);
void intFunc(va_list list);
typedef struct type{
			char*;
			void (*f)(va_list);
	}FunType;

#endif

