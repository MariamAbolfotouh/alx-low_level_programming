#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}

		if (str == NULL)
		{
			printf("(nil)");
		}
	}

	printf("\n");

	va_end(ptr);
}


