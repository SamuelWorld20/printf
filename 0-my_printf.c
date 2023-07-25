#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - it produces output according to a format.
 * @format: a character string
 *
 * Return: number of characters printed excluding the null byte
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
	int count;
	char ch;
	va_list args;
	va_start(args, format);

	count = 0;

	while ((ch = *format++))
	{
		if (ch == '%')
		{
			ch = *format++;
			switch (ch)
			{
				case 'c':
				{
					char c = va_arg(args, int);

					write(1, &c, 1);
					count++;
					break;
				}
				case 's':
				{
					const char *str = va_arg(args, const char*);

					while (*str)
					{
						write(1, str, 1);
						str++;
						count++;
					}
					break;
				}
				case '%':
				{
					char perc = '%';

					write(1, &perc, 1);
					count++;
					break;
				}
				default:
				{
					char perc = '%';

					write(1, &perc, 1);
					write(1, &ch, 1);
					count += 2;
					break;
				}
			}
		}
		else
		{
			write(1, &ch, 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
