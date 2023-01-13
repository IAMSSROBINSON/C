# Creating a constant type

An enumeration set can take on the role of its own `data-type`. The constants created within it (as well as the values they hold) act as properties of the set that was declared and variables can be created / declared of that enum set in particular:

### Syntax:

```C
data-type variableName

// create enumerated sequence named SNOOKER:
enum SNOOKER{RED = 1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};

// This means enum SNOOKER can be treated like a data-type
enum SNOOKER
```

<br>

## `enum CONSTANT ` data-type

To declare a variable of the `enum SNOOKER` data-type called 'pair' it follows the conventional variable declaration steps:

```C
// create a variable of the enum SNOOKER data-type:
enum SNOOKER pair
```
The variable pair of the enum SNOOKER data-type can now store values from the enumerated set it is derived from. 

<br>

## Assigning a value

Enumerated values are inherently of int data-type but if you want to explicitly cast an int value to the enumerated data-type you can do so:

```C
// cast an int value from the enumerated set to the enum SNOOKER data-type and assign to a variable of that data-type
pair = (enum SNOOKER) 7;
```

A variable can also be created at the declaration of the enumerated set:

```C
// Declare an enumeration set and create a variable of that data-type
enum SNOOKER {YELLOW, GREEN, BROWN, BLUE, PINK, BLACK} pair;
```

<br>

## Custom data-types

Using the `typedef` keyword a custom data-type can be created:

### Syntax:

```C
typedef definition typeName
```

<br>

This can be done to make a program more succinct instead of using multiple modifiers many times throughout a program for example if using: 

`unsigned short int variableName`

in multiple places, a custom data-type could be created: 

`typedef unsigned short int USINT;`

so that each variable declared with `unsigned short int` can use the custom data-type name `USINT` in its place.








