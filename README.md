# Holbertonschool : Printf by Tommy JOUHANS and Maxence HENOUS

This a repository for the Holberton School team project for the printf.

The printf() function prints output to stdout, according to format and other arguments passed to printf(). 
The string format consists of two types of items - characters that will be printed to the screen,
and format commands that define how the other arguments to printf() are displayed. Basically,
you specify a format string that has text in it, as well as "special" characters
that map to the other arguments of printf().


The prototype of this function is: int _printf(const char format, ...);
This project is a very simple explanation of how the _printf function works:
We check if the text to be displayed (format) is empty.
If so, we stop everything and return -1
We prepare the list of functions that can display each data type (%d, %s, %c, etc.).
We retrieve the arguments that the user provided after the format (using va_list).
We call a function (recording_error) that reads the format, finds the correct % symbols, and uses the appropriate function to display each value.
We exit cleanly and return the total number of characters displayed.

--- # **Compilation:**

When you are done creating you *main.c* file  you will need to compile it. You can use any compiler software you like, although this project was tested in gcc (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0 with different error flags such as:

> **-Wall:** Enables all the warnings about constructions.
>
> **-Wextra :** Enables some extra warning flags that are not enabled by **-Wall**.
>
> **-Werror:** Make all warnings into hard errors.
>
> **-pedantic:** Issue all the mandatory diagnostics listed in the C standard.
>
> **-Wno-format:** Disables warnings about printf format (so that you can try any type of format you want) in equivalence to a custom made variadic function.

root@f52c0d026c3049d68081893eaf522e3b-2377118072:~/holbertonschool-printf# gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

# **Execution:**

root@f52c0d026c3049d68081893eaf522e3b-2377118072:~/holbertonschool-printf# ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[
]FF300008 ,ff300
]0f145736eff
]%
]21[:neL]
Unknown:[%r]


## **Flowchart**

The flowchart provides a structured illustration of the function's internal workings in C, showing how it begins by sending data to standard output (STDOUT), then prints each normal character of the string passed as an argument while counting the number of characters printed. When a symbol is encountered, it enters conditional logic that identifies the type of specifier (for integers, characters, strings, or the symbol itself), processes the corresponding value, prints it correctly, increments the counter, and finally returns the total number of characters printed. This allows the function to provide accurate feedback on the print operation performed.

![_printf](https://github.com/TommyJOUHANSC28/holbertonschool-printf/blob/tommy/flowchart-final-printf.png?raw=true)



## Authors
Tommy JOUHANS (https://github.com/TommyJOUHANSC28)
Maxence HENOUS
