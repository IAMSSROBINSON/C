# Qualifying data types

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






