#include "main.h"

/**
 * get_width - get the width
 * @form: format string to print
 * @k: arguments to print them
 * @list: list of arguments
 * Return: the width
 */
int get_width(const char *form, int *k, va_list list)
{
	int curr = 0;
	int width = 0;

	for (curr = *k + 1; form[curr] != '\0'; curr++)
	{
		if (is_digit(form[curr]))
		{
			width = width * 10;
			width = width + form[curr] - '0';
		}

		else if (form[curr] == '*')
		{
			curr = curr + 1;
			width = va_arg(list, int);
			break;
		}

		else
		{
			break;
		}
	}

	*k = curr;

	*k--;

	return (width);
}
