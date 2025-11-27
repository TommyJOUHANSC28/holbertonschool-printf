# Holbertonschool : Printf by Tommy JOUHANS and Maxence HENOUS

This repository contains the project for the `_printf` function done by Tommy Jouhans and Maxence Henous at Holberton School in Dijon.

The `_printf()` function displays output on standard output (stdout) based on the format and other arguments passed to it.

## _printf.c
* The format consists of characters to be displayed and conversion specifiers.
* Prototype: `int _printf(const char *format, ...);`
* The function checks if the format is `NULL` and returns -1 if so.
* Iterates through the string, printing characters or interpreting conversion specifiers (`%c`, `%s`, `%d`, `%i`, `%%`).

## _recording_error.c
* Handles the parsing of the format string.
* Calls the right functions to print different data types.
* Returns the total number of characters printed.
* Uses a buffer to optimize calls to `write()`.

## Compilation
To compile your project, you can use:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
MAN_PAGE
A man page (man_3_printf) was created for _printf.

Execution
Handles %c, %s, %d, %i, and %%.

Some advanced features like u, o, x, X, S, r, R and buffer optimization were not implemented.

Example test outputs are shown in the repository screenshots.

Flowchart
Illustrates the function’s logic:

Send characters to STDOUT.

Detect % symbols.

Call the correct function for the conversion specifier.

Increment the character count.

Return total characters printed.

Authors
Tommy JOUHANS - https://github.com/TommyJOUHANSC28

Maxence HENOUS - https://github.com/maxence30

Date 
27th November 2025