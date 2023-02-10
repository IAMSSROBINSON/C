# Copying strings

`#include <string.h`> is a header file from the standard C library that provides functions on Strings.

<br>

## `strlen(destination, source)` String length

`strlen()` gives the numerical character length of a string (including spaces if multi-word) given as its argument - null character not counted. 

<br>

## `strcpy(destination, source, length)` String copy

Copies strings from one string character array to another. First argument is the destination where the string is being copied to and the second argument is the source of where the string is being copied from - null character is also copied!

<br>

## `strncpy()` String copy + length

`strncpy()` copies strings just like `strcpy()` but a third argument is provided of how much (in length) of the string to copy. Stops copying at the null character so it is not copied itself but after the string is copied a null character is added to the destination char array so the destination must always have +1 more character length available to accommodate for null character. 






