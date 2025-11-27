#include "main.h"
#include <unistd.h>

/**
 * _write_char - écrit un caractère dans le buffer et flush si plein
 * @c: caractère à écrire
 * Return: 1
 */
int _write_char(char c)
{
    static char buffer[1024];
    static int buf_index = 0;

    buffer[buf_index++] = c; /* ajouter le caractère */
    if (buf_index >= 1024)   /* buffer plein → écrire */
    {
        write(1, buffer, buf_index);
        buf_index = 0;
    }
    return 1;
}

/**
 * recording_error - Receives the main string and all the necessary parameters
 * to print a formatted string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
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
            for (j = 0; f_list[j].sym != NULL; j++)
            {
                if (format[i + 1] == f_list[j].sym[0])
                {
                    rev_val = f_list[j].f(arg_list);
                    if (rev_val == -1)
                        return (-1);
                    print_all += rev_val;
                    break;
                }
            }
            if (f_list[j].sym == NULL && format[i + 1] != '\0')
            {
                _write_char('%');
                _write_char(format[i + 1]);
                print_all += 2;
            }
            i = i + 1; /* sauter le caractère de format traité */
        }
        else
        {
            _write_char(format[i]);
            print_all++;
        }
    }

    return print_all;
}
