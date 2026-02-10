*This project has been created as part of the 42 curriculum by romarti2.*

# Description
Custom implementation of the `printf` function in C as part of the 42 curriculum. The goal of this project is to understand the handling of variadic functions, output formatting, and the writing of modular and robust code.

# Instructions
To compile the library, run:
make

This will generate a static library named *libftprintf.a*.

## Supported Conversions

The following format specifiers are supported:

%c — character  

%s — string  

%p — pointer  

%d / %i — signed decimal integer  

%u — unsigned decimal integer  

%x / %X — hexadecimal integer  

%% — percent sign  

# Algorithm and Data Structures

The core algorithm is based on a single-pass parsing of the format string.  
Each character of the string is processed sequentially:

If the character is not `%`, it is written directly to the output.

If `%` is encountered, the following character is interpreted as a format specifier.

The corresponding argument is retrieved using *va_arg*.

A dedicated conversion function formats and prints the value.

The total number of printed characters is accumulated and returned.

This approach closely mirrors the internal behavior of the original *printf* while remaining simple, readable, and efficient.

# Resources and AI Usage
 
- Stack Overflow: https://stackoverflow.com/  
- Internal C manuals  
- University manuals  
- Peer-to-peer guidance  

For this project, AI was used as a support tool to clarify the behavior of the original `printf` and to better understand variadic functions and edge cases.
