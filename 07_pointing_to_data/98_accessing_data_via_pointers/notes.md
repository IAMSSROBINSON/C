# Accessing data via pointers

Pointers are variables that store the memory address of other variables. 

<br>

## Regular variables

When a regular variable is declared memory is allocated in the system of the size appropriate for the data-type stated at a vacant memory address. Thus where ever the program encounters the variable name it references the data stored at that memory address. 

<br>

## Pointer variables

When a program encounters the name of a pointer variable it references the address it stores BUT the pointer variable can also be 'dereferenced' to reveal the data stored at the address it is pointing to.

<br>

## Declaring a pointer variable 

Declarations are made in the same way as regular variables but are prefixed with the '*' symbol which in this case represents the 'dereference operator' and only illustrates that this variable is a pointer.

The pointers data-type must match the data-type of the variable that it points to. 

<br>

## Memory address and data

Once the pointer has been declared it can be assigned the value of the variable to which it points by applying the addressof '&' operator.

```C
int number = 100;
int *ptr_variable = &number;

// The pointer variable should not be prefixed with the 'deference operator' in the assignment statement UNLESS the pointer is initialized immediately at declaration of the pointer variable itself. 
```

<br>

### Memory address

- When the pointer name is used alone (without the dereference operator) it represents the memory address of the regular variable pointed to as a hexadecimal. 

<br>

### Data pointed to

- Prefixing the pointer variable with the '*' dereference operator (or 'indirection' operator as it is sometimes known) anywhere else except at the declaration and initialization of the pointer variable will reference the data stored at the address pointed to. 

