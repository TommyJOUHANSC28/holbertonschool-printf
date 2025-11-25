#include "main.h"
#include <unistd.h>
/**
 * print_custom_string - prints a string with non-printable chars as \xHH
 * @arg_list: argument list containing the string
 *
 * Return: number of characters printed
 */
int print_custom_string(va_list arg_list)
{
char *s = va_arg(arg_list, char *);
int count = 0;
if (s == NULL)
s = "(null)";
while (*s)
{
unsigned char c = (unsigned char)*s;
if (c >= 32 && c < 127)
{
count += write(1, &c, 1);
}
else
{
char hex[4];
hex[0] = '\\';
hex[1] = 'x';
hex[2] = "0123456789ABCDEF"[c >> 4];
hex[3] = "0123456789ABCDEF"[c & 0xF];
count += write(1, hex, 4);
}
s++;
}
return count;
}