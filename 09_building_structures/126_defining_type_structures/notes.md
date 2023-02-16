# Defining structures

A data-type defined by a struct can be declared to be an actual data-type definition with the use of the `typedef` keyword before the struct keyword at declaration. 

<br>

## typedef

The `typedef` keyword identifies the struct as a prototype from which other structs can be declared by using any of its tag names and without the `struct` keyword. This helps to simplify the code and it is tradition to Capitalize the tag name so it can be easily identified as a struct-defined data-type.

Declarations of variables of a struct data-type can initialize all members by assigning values using comma separated lists in curly braces e.g. `Point top = {15, 24};`

<br>

## Nested structures

Structures can be nested within other structures. If doing so the member variables can be accessed using two "." operators e.g. `outer-structure.inner-structure.member`.