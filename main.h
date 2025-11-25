#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * struct convert - defines a structure for symbols and functions
 *
 * @symcro: The operator
 * @f: The function associated
 */
struct convert
{
char *symcro;
int (*f)(va_list);
};
typedef struct convert conver_t;
/**
* Reports an error during recording.
* This function formats and logs an error message related to recording.
* @format: A printf-style format string describing the error message.
* @f_list: A list of format arguments for the error message.
* @arg_list: Additional arguments used for formatting.
* Returns: a non-zero value if an error occurred, 0 otherwise.
*/
int recording_error(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int unsigned_integer(va_list);
int print_unsgned_number(unsigned int);
int print_reversed(va_list);
/**
* Computes the length of a number in base 10.
* Determines how many digits are required to represent the integer.
* @n: The integer whose length is to be calculated.
* Return int The number of digits in the integer.
*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif
