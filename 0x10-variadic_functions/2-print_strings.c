#include "variadic_functions.h"
/**
 * print_strings - print strings passed as arguments
 * @separator: to be printed between strings
 * @n: strings count
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
