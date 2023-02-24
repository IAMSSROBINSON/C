# Reading and writing lines

## `fgets();`

The `fgets();` function 'reads' a whole line of characters at a time. It requires 3 arguments:

1. char pointer / array of which the text will be assigned 
1. int stating the max number of characters to read per line
1. file_ptr specifying where text is being read from

<br>

## `fputs();`

The `fputs();` function 'writes' text one line at a time (add a newline character when a line is written) and returns `0` if successful or an EOF (end of file) constant if an error occurs or the end of the file is reached. It requires 2 arguments:

1. The text being 'written'
1. file_ptr of the file to be 'written' to


