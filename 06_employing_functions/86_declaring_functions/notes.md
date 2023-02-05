# Declaring functions

The first functions in a program should be the `main()` function and standard functions contained in the C header library e.g. printf from the `<stdio.h>` file.

<br>

## Custom functions

Most C programs contain custom functions that are called to execute the statements within them as the program executes. When that occurs the flow of the program resumes at the point after the function call thus allowing for modular isolated set routines that can be called repeatedly as required.

<br>

## Function prototype / Function declaration / Function header

Custom function declarations inform the compiler about the function and should be added before the `main()` function so that they can be used. 
If the function is to return no value then the return data-type `void` should be present before the function name in within the declaration.

If the function does return a value the return data-type of that value should be present before the function name and this return value can be saved to a variable or displayed using the correct format specifier for the data-type.

<br>

## Function definition

The function definition which contains the statements-to-be-executed are present after the `main()` function and can then be called from within the `main()` function. 

