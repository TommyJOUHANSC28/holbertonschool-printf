#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - Produces output according to a format
 * @format: format string containing directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0, printed_chars = 0;
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                return (-1);

            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                printed_chars++;
            }
            else if (format[i] == 's')
            {
                char *s = va_arg(args, char *);
                if (!s)
                    s = "(null)";
                while (*s)
                {
                    write(1, s, 1);
                    s++;
                    printed_chars++;
                }
            }
            else if (format[i] == '%')
            {
                write(1, "%", 1);
                printed_chars++;
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                int n = va_arg(args, int);
                char buf[20];
                int len = snprintf(buf, sizeof(buf), "%d", n);
                write(1, buf, len);
                printed_chars += len;
            }
            else
            {
                write(1, "%", 1);
                write(1, &format[i], 1);
                printed_chars += 2;
            }
        }
        else
        {
            write(1, &format[i], 1);
            printed_chars++;
        }
        i++;
    }

    va_end(args);
    return (printed_chars);
}