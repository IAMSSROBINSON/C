# Passing structures to functions

The values of a struct member can be stored inside of an array just as the values of any other data-type can.

Declare the array normally and within curly braces goes a comma separated list of member values for each set.

<br>

## Passing struct data-type as an arugument

To pass a struct as an argument the struct data-type is provided in the function prototype declaration and definition with a variable name for the struct that will allow member values to be accessed inside the function. 

<br>

## Pass by value

If just a variable name is provided as an argument then this is 'passing by value' and a copy of the original struct is being worked on and original values remain unchanged. 

Passing a large struct by value is inefficient use of memory space as a copy is created	of the whole entire struct in the memory.

<br>

## Pass by reference

If a *pointer variable name is provided as an argument then this is 'passing by reference' and the original struct member values are being worked on and the original values will therefore change.

Passing a large struct by reference is more efficient use of memory as the struct will only occupy the sizeof a pointer.

