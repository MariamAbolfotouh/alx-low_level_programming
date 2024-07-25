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

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (ptr != NULL)
		{
			printf("%s", va_arg(ptr, *char);

			if (separator != NULL && i != (n - 1))
			{
				printf("%s", separator);
			}
		}

		if (ptr == NULL)
		{
			printf("(nil)");
		}
	}

	printf("\n");

	va_end(ptr);
}


