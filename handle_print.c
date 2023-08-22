#include "main.h"

/**
 * handle_print - print with type
 * @fmt: string format
 * @list: list
 * @ind: pointer to int
 * @buffer: array
 * @flags: int
 * @width: int
 * @precision: int
 * @size: the size
 * Return: int
 */

int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, unknow = 0, printed = -1;
	fmt_t fmt_types[] = {
		{'c', print_char}, {'d', print_int},
		{'%', print_percent},
		{'i', print_int}, {'s', print_string}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper}, {'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string}, {'\0', NULL}
	};
	for (i = 0; fmt_types[i].fmt != '\0'; i++)
	{
		if (fmt[*ind] == fmt_types[i].fmt)
		{return (fmt_types[i].fn(list, buffer, flags, width, precision, size)); }
	}
	if (fmt_types[i].fmt == '\0')
	{
		if (fmt[*ind] == '\0')
		{return (-1); }
		unknow = unknow + write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
		{unknow = unknow + write(1, " ", 1); }
		else if (width > 0)
		{(*ind)--;
			while (fmt[*ind] != ' ' && fmt[*ind] != '%')
				--(*ind);
			if (fmt[*ind] == ' ')
			{(*ind)--; }
			return (1); }
		unknow = unknow + write(1, &fmt[*ind], 1);
		return ((int)unknow); }
	return ((int)printed);
}
