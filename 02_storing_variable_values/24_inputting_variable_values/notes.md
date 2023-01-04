# Inputtting variable values

The standard input/output library `<stdio.h>` allows the program to take input from users with the `scanf` function. 

<br>

## Scanf()

The `scanf` function requires two arguments:
- the "format specifier" for the data-type being input e.g. "%d" for integers (indicating to the machines memory how many bytes to allocate depending on the format specified)
- the variableName representing the location in memory reserved for that input datas storage
  - this must be preceded with the `&` character which in this instance means 'addressof' (unless the input taken is a string)

<br>

### Computer memory
The computers memory is like a long row of slots each with a unique address (in hexadecimal value) with each unique address slot containing data stored at this address.
The format specifier for an allocated address is "%p".

<br>

### Tips
The scanf function stops taking an input when a space is entered. 
You can take more than one input in the same function by providing multiple format specifiers in an individual double quote separated by a space as `&` the multiple variableNames for the addressof storage separated by commas.
