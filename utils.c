#include "main.h"

/**
 * is_printable - char is able to be printed
 * @c: Char
 * Return: 1 if c is able to be printed and 0 if else
 */

int is_printable(char c)
{
	if (c > 31 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * append_hexa_code - Append ascci in hexadecimal
 * @buffer: array
 * @i: index to start
 * @ascii: asci code.
 * Return: int
 */

int append_hexa_code(char ascii, char buffer[], int i)
{
	char map[] = "0123456789ABCDEF";

	if (ascii <= -1)
	{
		ascii = ascii * -1;
	}

	buffer[i] = '\\';
	i++;
	buffer[i] = 'x';
	i++;
	buffer[i] = map[ascii / 16];
	i++;
	buffer[i] = map[ascii % 16];

	return (3);
}

/**
 * is_digit - return if a char is a digit or no
 * @c: Char
 * Return: 1 if digit and 0 otherwise
 */

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
