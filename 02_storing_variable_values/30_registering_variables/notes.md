# Registering variables 

<br>


## `registered`

Prefixing a variable with the `registered` keyword at declaration tells the compiler that this variable in question will be heavily used by the program and so to place it in the machine registers of the computer to speed up access times. 


- Only local internal variables can be prefixed with `registered`.
  - Example: A variable storing the control value of a loop whose value is accessed and compared on each iteration and thus a loops execution could be speeded up.  
- A limited system dependant amount can only be `registered` at any given point.
- The `register` keyword is ignored by the compiler if the system cannot meet the requirements but the normal variable declaration will still proceed. 

<br>

## `volotile`

Prefixing a variable with the `volotile` keyword demands that the compiler not include the variable in the machine register as the value could be changed at any point.

- usefule for global variables that may be concurrently modified by multiple threads.
  - Example: A global variable used to store the control value of a loop whose value may be changed from outside the loop.