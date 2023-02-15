# Grouping in a structure

A `struct` can contain variables (known as members) of different data-types that can be referenced using the struct name. 

A struct is typically declared before the 'main' function in a program.

<br>

## Multiple variables

Grouping related variables together in a `struct` helps to organize the data that needs to be stored. For example a company needs to store employee details: 

- employeeName
- employeeAddress
- employeeSalary
- employeeTax ect..

<br>

## Declaring a struct

To declare a structure the `struct` keyword is used followed by a name for the struct and curly braces containing the declared variable members and ends with a semi-colon after the closing brace.

### Syntax:

```C
struct coordinates {
	int x;
	int y;
};
```

<br>

## Tag names

A tag name can be created as a comma separated list after the last curly brace. This acts like a variable using the struct as a data-type. For example if creating a variable named 'point' of the 'coordinates' data-type this declaration can be made:

### Syntax:

```C
struct coordinates {
	int x;
	int y;
} point;
```

The struct members are referenced using "." operator (dot operator) adding the member name to the tag name e.g. `point.x`.

<br>

## Declaring a new struct variable

A new struct variable can be declared using the name of an existing struct. The new variable will inherit the original members properties. For example to create a new struct variable named 'top' with the properties of the struct 'coordinates' and including members 'int x' and 'int y' this declaration can be used: `struct coordinates top;`.