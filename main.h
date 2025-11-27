#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* Reports an error during recording.
* This function formats and logs an error message related to recording.
* @format: A printf-style format string describing the error message.

* Returns: a non-zero value if an error occurred, 0 otherwise.
*/
int _printf(const char *format, ...);
#endif
