# Using pointers in structures

Using a character pointer in a structure as a string container is better than using a character array as a string container.

A full string can only be assigned to a char array upon declaration. If trying to assign a struct char array after declaration using the assignmenet operator (=) then it must be done by assigning one character as an element at a time. 

<br>

## L-value

L-values are objects.

For each assignment, the L-value (value to the left of the assignment operator) represents the memory location. 

<br>

## R-value

R-values are data.

The value to the right of the assignment operator (=) - R-value, represents the data to read into that location. 

An R-value cannot appear on the left of an = operator.
An L-value may appear on either side of an = operator.

<br>

## Individual elements

Each individual element of a char array is deemed an L-value of which an individual character can be assigned however a char pointer is also an L-value of which an entire string can be assigned after that pointer has been declared. 



