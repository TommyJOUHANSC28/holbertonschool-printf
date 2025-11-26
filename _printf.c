#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
int print_all;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"u", unsigned_integer},
{"b", print_binary},
{"r", print_reversed},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
print_all = recording_error(format, f_list, arg_list);
va_end(arg_list);
return (print_all);
}
{'u', handle_unsigned},
{'o', handle_octal},
{'x', handle_hex},
{'X', handle_HEX},
