# Holbertonschool : Printf by Tommy JOUHANS and Maxence HENOUS

This a repository for the Holberton School team project for the printf.

The printf() function prints output to stdout, according to format and other arguments passed to printf(). 
The string format consists of two types of items - characters that will be printed to the screen,
and format commands that define how the other arguments to printf() are displayed. Basically,
you specify a format string that has text in it, as well as "special" characters
that map to the other arguments of printf().


The prototype of this function is: int _printf(const char format, ...);

This project aims to understand and illustrate the inner workings of the printf function in C, explaining how it displays text and handles different format specifiers such as %%, %s, %d, and %c; while also counting the total number of characters displayed.





## **Flowchart**

The flowchart provides a structured illustration of the function's internal workings in C, showing how it begins by sending data to standard output (STDOUT), then prints each normal character of the string passed as an argument while counting the number of characters printed. When a symbol is encountered, it enters conditional logic that identifies the type of specifier (for integers, characters, strings, or the symbol itself), processes the corresponding value, prints it correctly, increments the counter, and finally returns the total number of characters printed. This allows the function to provide accurate feedback on the print operation performed.

![_printf](https://github.com/TommyJOUHANSC28/holbertonschool-printf/blob/tommy/printf-flowchart.png?raw=true)