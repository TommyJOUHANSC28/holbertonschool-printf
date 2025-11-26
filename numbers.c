#include "main.h"

int handle_octal(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[32];
    int i = 0, count = 0;

    if (n == 0)
        return write(1, "0", 1);

    while (n > 0)
    {
        buffer[i++] = (n % 8) + '0';
        n /= 8;
    }

    while (i--)
        count += write(1, &buffer[i], 1);

    return count;
}

int handle_hex(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char *digits = "0123456789abcdef";
    char buffer[32];
    int i = 0, count = 0;

    if (n == 0)
        return write(1, "0", 1);

    while (n > 0)
    {
        buffer[i++] = digits[n % 16];
        n /= 16;
    }

    while (i--)
        count += write(1, &buffer[i], 1);

    return count;
}

int handle_HEX(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char *digits = "0123456789ABCDEF";
    char buffer[32];
    int i = 0, count = 0;

    if (n == 0)
        return write(1, "0", 1);

    while (n > 0)
    {
        buffer[i++] = digits[n % 16];
        n /= 16;
    }

    while (i--)
        count += write(1, &buffer[i], 1);

    return count;
}
