#include "main.h"

/**
 * get_sz - get the size
 * @format: print the arguments
 * @k: arguments to print them.
 * Return: size
 */

int get_sz(const char *format, int *k)
{
	int curr = *k;
	int sz = 0;

	curr++;

	if (format[curr] == 'l')
	{
		sz = S_LONG;
	}
	else if (format[curr] == 'h')
	{
		sz = S_SHORT;
	}


	if (size == 0)
	{
		*k = curr - 1;
	}
	else
	{
		*k = curr;
	}

	return (sz);
}
