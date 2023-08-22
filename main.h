#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED (x)  (void)(x)
#define BUFF_SIZE 1024

/* flag */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* size */
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);

/* print chars and str */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* print num */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* handle other specifiers */
int get_flags(const char *format, int *i);
int get_wd(const char *format, int *k, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_sz(const char *format, int *k);

/*print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/**** UTILS ****/
int is_print(char c);
int append_hexa(char c, char[], int);
int is_dgt(char c);

long convert_size_num(long int num, int size);
long convert_size_unsigned(unsigned long int num, int size);

#endif
