#include "main.h"
#define BUFFER_SIZE 1024
/** buffer_flush - clears the buffer to stdout
* @buffer: pointer to the buffer
* @len: number of characters to write
* Return: number of characters written
*/
static int buffer_flush(char *buffer, int len)
{
return write(1, buffer, len);
}
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
char buffer[BUFFER_SIZE];
int i, j, rev_val, print_all, buf_index;
print_all = 0, buf_index = 0;
for (i = 0; format[i] != '\0'; i++)
{
buffer[buf_index++] = format[i];
if (buf_index == BUFFER_SIZE)
{
print_all += buffer_flush(buffer, buf_index);
buf_index = 0;
}
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
_write_char(format[i]);
print_all = print_all + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_write_char(format[i]);
print_all++;
}
}
if (buf_index > 0)
print_all += buffer_flush(buffer, buf_index);
return (print_all);
}
