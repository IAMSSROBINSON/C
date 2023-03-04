# Writing a C program

<br>

## Preprocessor instructions

Programs will begin with preprocessor instructions which begin with # and an instruction to the C compiler to allow the program use of the information from within the 'standard input/output' library:

```C
// preprocessor instructions begin with #

// instruction to the compiler to include information from the standard input/output library <stdio.h>

#include <stdio.h> 
```

<br>

## Code statements executed in functions

A program may contain multiple functions but all programs must have a `main` function which is the starting point for all C programs. It is required by the compiler to compile the code:

<br>

### Function syntax:

```C
#include <stdio.h>

dataType functionName () {
	// statementsToBeExecuted;
	// return value;
}
```

<br>

## Return value required by function declaration
Once the function has executed the statements it can return a value to the caller. The value must be of the `dataType` specified before the `functionName`:

```C
#include <stdio.h>

int main () {
	// statementsToBeExecuted;
	return 0; 
}
```

The function declaration states that integer value of the int dataType should be returned by the function upon completion. Returning a value of 0 after the execution of the program typically indicates to the OS that the program ran successfully.


<br>

## Standard input/output library functions

A function from the standard input/output library made available by the preprocessor instruction `printf` can be used to print an argument:

```C
#include <stdio.h>

int main () {
	printf("Hello World!\n");
	return 0;
}
```

<br>

The program is now ready to be compiled into machine readable byte format as an executable file. 

When the compilation is successful the compiler creates an executable file alongside the original source code file.

`gcc hello.c -o hello.exe` command will create  an executable file named `hello.exe` alongside the original source code file.

`./hello.exe` command will now run the program and the output will be visible. 



