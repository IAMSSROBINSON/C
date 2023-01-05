# Qualifying data types

## Signed

Positive and negative integers are known as `signed` values and they have a value range of either `long` or `short`.

int values are mostly by default created as `long` and have a value range of +2,147,483,647 down to minimum value of -2,147,483,648.

If the int value is by default created as `short` then the value range is a maximum of +32,767 to a minimum of -32, 768.

The range size can be directly / specifically specified at the start of the variable declaration to either save space by using a `short` or increase range size by using a `long`:

```C
short int number1

long int number2
```

<br>

## <limits.h> header file

This header file contains a library that allows each data-type to be size to be limited:

To access this const values are created at the variable declaration:

```C
// int data-type:
INT_MAX
INT_MIN
```

```C
// short-int variable declarations:
SHRT_MAX
SHRT_MIN
```

```C
// long-int variable declarations:
LONG_MAX
LONG_MIN
```

<br>


## Unsigned

Non-negative `unsigned` int data-type can be declared using the `unsigned` keyword when the variable will never be given a negative value. 

Unsigned short variable range: 0 to 65,535 but only occupy the same memory space as a regular short int variable.
Unsigned long variable range: 0 to 4,294,967,295 but will only occupy the same memory space as a regular long int variable.

<br>

## sizof operator

`sizeof` is used to reveal the amount of memory space reserved by variables of any data-type. It is good programming practice to use the smallest amount of memory possible. 

Example:

If a variable will only ever have a value less than 65,535 then it should be given an `unsigned short int` at declaration as it will be assigned only 2 bytes of memory as compared to a long int which reserves 4 bytes of memory.





