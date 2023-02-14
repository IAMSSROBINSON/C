# Converting strings

The `#include` directive, along with the `<stdlib.h>` header file makes a function called 'alpha-to-integer' - `atoi()` available to the program to be used to convert a string to an integer.

<br>

## `atoi()` Alpha-to-Integer

The `atoi()` function:

- takes a single string as its argument
- returns 0 if the string is empty
- returns 0 if the strings first character is not a number
- returns 0 if the strings first character is not a minus sign(-)

Otherwise the string/numeric part of the string is converted to an int data-type up until the `atoi()` function meets a non-numeric character in the string. When it meeta a non-numeric character it will return the number so far converted as an int data-type.

<br>

## `itoa()` Interger-to-Alpha

Used to convert an int data-type value to a string and requires 3 arguments:

- the number to be converted
- the string the converted number will be assigned to	
- the base to be used for the conversion e.g. base of 2 for binary equivalent

<br>

## `sprintf()` alternative to `itoa()`

An ANSI compliant alternative to `itoa()` but a base value cannot be set for the conversion. `sprintf()` takes 3 arguements:

- the string the converted number will be assigned to	
- a format specifier
- the number to be converted

The `sprintf()` function returns an integer which is the number of converted characters in the converted string.

