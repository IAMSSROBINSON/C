# Reading and writing entire files

## `fread();`

The `fread();` function allows for reading entire files. It returns the number of objects it has read (characters, spaces and \n's as one object each). The `fread();` function requires 4 arguments:

1. A `char` variable where text can be stored (must be large enough to hold entire content)
2. The size of text to read at a time (typically 1)
3. The total number of characters to read
4. A file pointer to the file being used

<br>

## `fwrite();`

The `fwrite();` function allows entire files to be written to. It returns the number of objects it has written. The `fwrite();` function requires 4 arguments:

1. A `char` variable where text can be stored (must be large enough to hold entire content)
2. The size of text to write at a time (typically 1)
3. The total number of characters to write
4. A file pointer to the file being used
