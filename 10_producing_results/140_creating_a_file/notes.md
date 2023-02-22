# Creating a file

To handle files a special data-type 'file pointer' data-type is used. A file pointer can:

- open files 
- read files
- write to files
- close files

<br>

### Syntax:
```C
// declare a file pointer
FILE *file_ptr; // FILE data-type *fp pointer variable name
```

<br>

## Structure in `<stdio.h>`

`FILE *fp` points to a structure defined in the `<stdio.h>` header file and it contains information about a file:

- current character
- is file being read from
- is file being written to

<br>

## Opening a file

A file must be opened first before reading or written using function: `fopen();`.
`fopen()` takes two arguments within double quotes:

- the path/location of the file: (`"./fileName.txt"`)
- a mode to open the file (`"r"` for read, or `"w"` for write)

`fopen();` will return a file pointer if successfully opened or `NULL` value otherwise and can then be read from, add to or newly written to depending on the 'mode' given.

<br>

## Closing a file

`fclose(file_ptr);` is used (by providing the file pointer as an argument) on open files because once a file has been opened in any capacity it must be closed. 

<br>

## File modes

File modes that can be provided as the second argument to the `fopen();` function:

|Mode		|Operation													|
|:------------|:----------------------------------|
|r 						|Open existing file to 'read' 			|
|w 						|Open existing file to 'write' Creates new file if not exists or open existing file and clear previous content 			|
|a 						|Append text. Open or create text file for writing at the EOF |
|r+ 					|Open text file to read from or write to |
|w+ 					|Open text file to write to or read from |
|a+ 					|Open or create text file to read from or write to at the EOF |
|b, w+b|Adding a 'b' mode to any other modes e.g. 'rb' or 'w+b' relates to a binary file|

<br>



