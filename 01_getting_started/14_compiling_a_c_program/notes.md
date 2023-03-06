# Compiling a c program

When it is time for the program run and the source code to be compiled into machine readable byte format, the compiler creates an executable file alongside the original source code file.

<br>

## `a.out`

The default file is named `a.out` (for output) on Linux systems and a.exe (for executable) on Windows systems.

<br>

## Custom naming of executable files

When compiling the source code a custom name can be given rather than use the default names for the executable file. The is achieved with the inclusion of a `-o` option followed by a custom name:

<br>

### Example:

`gcc hello.c -o hello.exe` command will create  an executable file named `hello.exe` alongside the original source code file (gcc is the compiler, hello.c is the source code, -o is the option flag and hello.exe is the custom executable file name).

`./hello.exe` command will now run the program and the output will be visible. 



