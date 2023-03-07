# Understanding compilation


## Source code (.c)

When executing a program from a C source code file (if the source code does not contain errors) the compilation process goes through four separate stages each generating a new file. The temporary files created during the compilation stages are normally auto-deleted but can be kept by running the command: `-save-temps` along with the compiler command e.g. `gcc hello.c -o main.exe -save-temps`

<br>

## Preprocessor (.i)

The preprocessor goes to the source code for the program and substitutes all preprocessor directives (#include) with real library code to implement them. The file that is generated contains the source code + the substitutions in text format and will have an .i file extension. 

<br>

## Compiler (.s)

The compiler reads the high-level statements, instructions and algorithms from the .i file and translates them into low-level assembly language instructions. The file that is generated contains the assembly language text code in text format and will have an .s file extension. 

<br>

## Assembler (.o)

The assembler converts the assembly language text code from the .s file into machine code. The file that is generated contains the binary format (0's and 1's) and will have an .o file extension. 

<br>

## Linker (.exe)

The linker combines the specified binary objects from the .o files into a single executable file. This allows for the creation of larger programs using modular programming with more than one file containing functions to be reused - if the same function is defined in more than one object file it will report an error and the .exe file will not be created. The file that is generated is in binary format (0's and 1's) and will have a .exe file extension. 





