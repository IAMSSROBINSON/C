# Validating strings

`#include <ctype.h>` allows a program to use functions that perform tests on characters. 

<br>

## `#include <ctype.h>` usage

Mainly used by looping over string characters to analyze each to see if they meet a certain condition. If a condition is not met a 'flag' variable can be set set to indicate where an entry is invalid.

<br>

## Popular functions

There are many function included in the `<ctype.h>` header file. When the functions are invoked each will return a non-zero value(-1 or otherwise) when the test character is the one that is expected, otherwise it will return a zero (0) if it is not the expected result. 

### isalpha();

`isalpha();` tests whether its argument is of alphabetical value.

<br>

### isdigit();

`isdigit();` also expressed as `isdigit() == 0;` Tests whether a character is of numerical value. 

<br>

### ispunct();

`ispunct();` tests to see if a character is of any other printable symbol.

<br>

### isspace();

`isspace();` tests to see if a given "character" is actually a " " space.

<br>

### isupper();

`isupper();` tests to see if a character is uppercase or not.

<br>

### islower();

`islower();` tests a character for lowercase status or not.

<br>

### toupper();

`toupper();` changes a character to uppercase status.

<br>

### tolower();

`tolower();` Changes a character to be lowercase.

