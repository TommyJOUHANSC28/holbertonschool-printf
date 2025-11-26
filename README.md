# Holbertonschool : Printf by Tommy JOUHANS and Maxence HENOUS

This repository contains the data for the team project by Tommy Jouhans and Maxence Henous at Holberton School in Dijon concerning the `printf` function.

The `printf()` function displays the result on standard output (stdout), based on the format and other arguments passed to it.

The format consists of two types of elements: the characters to be displayed on the screen,
The prototype of this function is: int _printf(const char format, ...);
This project is a very simple explanation of how the _printf function works:
We check if the text to be displayed (format) is empty.
If so, we stop everything and return -1
We prepare the list of functions that can display each data type (%d, %s, %c, etc.).
We retrieve the arguments that the user provided after the format (using va_list).
We call a function (recording_error) that reads the format, finds the correct % symbols, and uses the appropriate function to display each value.
We exit cleanly and return the total number of characters displayed.

_printf.c:
![_printf](https://github.com/TommyJOUHANSC28/holbertonschool-printf/blob/main/printf.c.png?raw=true)

_printf.c:
![_printf](https://github.com/TommyJOUHANSC28/holbertonschool-printf/blob/main/recording-error.png?raw=true)


--- # **Compilation:**

When you are done creating you *main.c* file  you will need to compile it. You can use any compiler software you like, although this project was tested in gcc (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0 with different error flags such as:

root@f52c0d026c3049d68081893eaf522e3b-2377118072:~/holbertonschool-printf# gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

# **Execution:**
For a week we tried to solve the advanced tasks; it was obvious, we tried to display a small part of the... All the above options work well together. We were unable to solve the following functions to handle the following conversion specifiers:
u, o, x, X, S, +, space, l, h, r, R and to use a local buffer of 1024 characters in order to call write as little as possible. The field width and precision for non-custom conversion specifiers, the 0 flag character for non-custom conversion specifiers, the - flag character.

root@f52c0d026c3049d68081893eaf522e3b-2377118072:~/holbertonschool-printf# ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[%, %] // unresolved 
Length:[39, 39]
Negative:[%] // unresolved 
Negative:[-762534]
Unsigned:[%] // unresolved
Unsigned:[2147484671]
Unsigned octal:[%] // unresolved
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%, %] // unresolved
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[%] // unresolved
Character:[H]
String:[%] // unresolved
String:[I am a string !]
Address:[%] // unresolved
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[%] // unresolved
Len:[12]
Unknown:[%] // unresolved
Unknown:[%r]

Checking for memory leaks using "Valgrind":
root@ca323180001b463890b5e1f9a308b328-2377118072:~/holbertonschool-printf# valgrind ./a.out
==5334== Memcheck, a memory error detector
==5334== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==5334== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==5334== Command: ./a.out
==5334== 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[%, %]
Length:[39, 39]
Negative:[%] // unresolved
Negative:[-762534]
Unsigned:[%] // unresolved
Unsigned:[2147484671]
Unsigned octal:[%] // unresolved
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%, %] // unresolved
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[%] // unresolved
Character:[H]
String:[%] // unresolved
String:[I am a string !]
Address:[%] // unresolved
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%] 
Len:[%] // unresolved
Len:[12]
Unknown:[%] // unresolved
Unknown:[%r]
==5334== 
==5334== HEAP SUMMARY:
==5334==     in use at exit: 0 bytes in 0 blocks
==5334==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==5334== 
==5334== All heap blocks were freed -- no leaks are possible
==5334== 
==5334== For lists of detected and suppressed errors, rerun with: -s
==5334== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## **Flowchart**

The flowchart provides a structured illustration of the function's internal workings in C, showing how it begins by sending data to standard output (STDOUT), then prints each normal character of the string passed as an argument while counting the number of characters printed. When a symbol is encountered, it enters conditional logic that identifies the type of specifier (for integers, characters, strings, or the symbol itself), processes the corresponding value, prints it correctly, increments the counter, and finally returns the total number of characters printed. This allows the function to provide accurate feedback on the print operation performed.

![_printf](https://github.com/TommyJOUHANSC28/holbertonschool-printf/blob/tommy/flowchart-final-printf.png?raw=true)



## Authors
Tommy JOUHANS (https://github.com/TommyJOUHANSC28)
Maxence HENOUS

