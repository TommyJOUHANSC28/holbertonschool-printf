#include "main.h"
/**
 * print_binary -  Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list list)
{
unsigned int number, base;
int i, len;
char *str;
char *rev_str;
base = 2;
number = va_arg(list, unsigned int);
if (number == 0)
return (_putchar('0'));
if (number < 1)
return (-1);
len = base_len(number, base);
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
return (-1);
for (i = 0; number > 0; i++)
{
if (number % 2 == 0)
str[i] = '0';
else
str[i] = '1';
number = number / 2;
}
str[i] = '\0';
rev_str = rev_string(str);
write_base(rev_str);
free(str);
free(rev_str);
return (len);
}
