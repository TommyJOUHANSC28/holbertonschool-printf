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
{"o", handle_octal},
{"x", handle_hex},
{"X", handle_HEX},
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
{
    int print_all = 0;
    char buffer[1024];       // buffer local
    int buf_index = 0;       // position actuelle dans le buffer

    conver_t f_list[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {"d", print_integer},
        {"i", print_integer},
        {"u", unsigned_integer},
        {"b", print_binary},
        {"r", print_reversed},
        {"o", handle_octal},
        {"x", handle_hex},
        {"X", handle_HEX},
        {NULL, NULL}
    };

    va_list arg_list;
    if (format == NULL)
        return (-1);
    va_start(arg_list, format);

    /* Appelle une version modifiée de recording_error qui prend buffer et buf_index */
    print_all = recording_error(format, f_list, arg_list);

    /* Écrire tout ce qui reste dans le buffer */
    if (buf_index > 0)
        write(1, buffer, buf_index);

    va_end(arg_list);
    return (print_all);
}
