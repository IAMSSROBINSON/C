# Pointing to functions

A pointer can be created to that it points to functions, this is a function pointer. 

<br>

## Function pointers simply store a memory address

A pointer to a function is like a pointer to data however it must always be enclosed within parenthesis when using the *deference operator to avoid complier errors. This is followed by more parentheses containing any arguments that are being passes into the function to which the pointer points. 

<br>

## Function pointer contents

The function pointer contains the address in memory where the function it points to begins. 

When the function pointer is dereferenced, the function that it points to gets called and any arguments specified to the function pointer get passed to the called function. 

<br>

## Passing function pointers as an argument

Function pointers can also be passed as an argument to another function so that the receiving function calls the function that the function pointer points to. 