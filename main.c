#include "main.h"

/**
 * main - test _printf pour tous les cas demandés
 *
 * Return: 0
 */
int main(void)
{
    unsigned int u_val = 123;
    unsigned int o_val = 123;
    unsigned int x_val = 3055;
    unsigned int X_val = 3055;

    _printf("Unsigned: %u\n", u_val);
    _printf("Octal   : %o\n", o_val);
    _printf("Hex     : %x\n", x_val);
    _printf("HEX     : %X\n", X_val);

    _printf("Mix     : u=%u, o=%o, x=%x, X=%X\n",
            u_val, o_val, x_val, X_val);

    return 0;
}
