#include "main.h"
/**
 * recording_error - Receives the main string and all the necessary parameters
 * to print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int recording_error(const char *format, conver_t f_list[], va_list arg_list)
{
int i, j, rev_val, print_all;
print_all = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; f_list[j].symcro != NULL; j++)
{
if (format[i] == f_list[j].symcro[0])
{
rev_val = f_list[j].f(arg_list);
if (rev_val == -1)
return (-1);
print_all += rev_val;
break;
}
}
if (f_list[j].symcro == NULL && format[i] != ' ')
{
if (format[i] != '\0')
{
_putchar(format[i]);
print_all = print_all + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putchar(format[i]);
print_all++;
}
}
return (print_all);
}
