# Reading and writing characters

## Standard input

### `stdin` represents the keyboard

- default source for `scanf();` function
- `scanf(...);` == `fscanf(stdin, ...);`

<br>

### `scanf();` is `fscanf();` simplified

- requires filestream as first argument (source from where series of characters are introduced into the program)

<br>

## Standard input

### `stdout` represents the monitor

- default source for printf(); function
- `printf();` == `fprintf(stdout, ...);`

<br>

### `printf();` is `fprintf();` simplified

- requires output filestream as first argument (destination where series of characters will output from the program)

<br>

## Other standard functions

There are other standard functions that have stdin or stdout as their default filestreams which have other equivalent functions allowing that an alternative filestream be specified:

### `fputc();`	

- writes to a filestream one character at a time (typically by looping through char array)
- returns ASCII code for current character or constant EOF denoting end of file is reached == -1

### `fgetc();`

- reads from a filetream one character at a time

<br>

### `fputs();`

- writes to a filestream one line at a time

### `fgets();`

- reads from a filestream one line at a time

<br>

### `fread();`

- reads entire filestream 

### `fwrite();` 

- write an entire filestream

<br>

### `stderr();`

- used to output error messages