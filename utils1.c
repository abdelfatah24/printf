#include "main.h"

/**
 * convert_size_num - number to the size
 * @num: Number to shown
 * @size: Number to be shown
 * Return: value of num
 */

long convert_size_num(long num, int size)
{
	if (size == S_LONG)
	{
		return ((long)num);
	}
	else if (size == S_SHORT)
	{
		return ((short)num);
	}
	else
	{
		return ((int)num);
	}
}

/**
 * convert_size_unsigned - number to the size
 * @num: Number to be shown
 * @size: Number to be casted
 * Return: value
 */
long convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
	{
		return ((unsigned int)num);
	}
	else if (size == S_SHORT)
	{
		return ((unsigned short)num);
	}
	else
	{
		return ((unsigned int)num);
	}
}
