# Grouping in a union

A `union` allows different data of any data-type to be stored at the same memory location as the program moves forward. For better efficiency of memory when memory is limited a value assigned to a 'union' will overwrite a value previously stored at that location. 

<br>

## Declaring a `union`

Declare a `union` (similar to a struct) by stating the `union` keyword upfront.
Members of a union can only be assigned values individually as the program progresses.

<br>

## Array of unions

An array of unions can be created by assigning member values inside of curly braces for each set.

If union members are all the same data-type they can be initialized at declaration only.  

<br>

## Pointer to unions

Pointers to unions are permitted in the same way as a pointer to a struct is and are passed to functions just like other variables.  
