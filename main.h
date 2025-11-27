#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * struct convert - Structure associant un symbole à une fonction
 * @sym: le symbole (%c, %s, %d, etc.)
 * @f: pointeur vers la fonction correspondante
 */
typedef struct convert
{
    char *sym;
    int (*f)(va_list);
} conver_t;

/* ----- Prototypes du printf ----- */
int _printf(const char *format, ...);

/* ----- Handlers de base ----- */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int unsigned_integer(va_list args);

/* ----- Fonctions utilitaires ----- */
int _write_char(char c);
int print_number(va_list args);
int print_unsgned_number(unsigned int n);
int print_reversed(va_list args);

/* ----- Fonctions pour conversions numériques ----- */
unsigned int base_len(unsigned int num, int base);
void write_base(char *str);
char *rev_string(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* MAIN_H */
