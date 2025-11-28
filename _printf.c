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
    int i = 0, counter = 0;
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
                counter += write(1, &c, 1);
            }
            else if (format[i] == 's')
            {
                char *s = va_arg(args, char *);
                if (!s)
                    s = "(null)";
                while (*s)
                {
                    counter += write(1, s, 1);
                    s++;
                }
            }
            else if (format[i] == '%')
            {
                counter += write(1, "%", 1);
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                int n = va_arg(args, int);
                char buf[20]; 
                int len = 0;

                if (n < 0)
                {
                    counter += write(1, "-", 1);
                    n = -n;
                }
                do {
                    buf[len++] = (n % 10) + '0';
                    n /= 10;
                } while (n > 0);

                while (len--)
                    counter += write(1, &buf[len], 1);
            }
            else
            {
                counter += write(1, "%", 1);
                counter += write(1, &format[i], 1);
            }
        }
        else
        {
            counter += write(1, &format[i], 1);
        }
        i++;
    }

    va_end(args);
    return (counter);
}

