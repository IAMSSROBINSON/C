# Allocating memory

`<stdlib.h>` header file provides memory management functions to request that memory be allocated as the program proceeds through execution.

<br>

## malloc();

- takes one int argument / expression stating how many bytes of memory needing to allocate
- does not clear memory allocated so previous values may remain
- returns a pointer to start of memory block allocated if successful or NULL if not


<br>

## calloc();

- takes two int arguments / expressions that multiply to state how much memory is required 
- clears memory allocated to zero (0) value
- returns a pointer to start of memory block allocated if successful or NULL if not

<br>

## realloc();

- to increase memory previously allocated by `malloc();` or `calloc();`
- first argument: the pointer (or array) of the allocated memory block
- second argument: int / expression stating new block size
- returns pointer to start of increased memory block if successful or NULL if not
- memory should be freed when no longe required by stating the memory block pointer as argument to `free();` function

<br>

## discover size of dynamically allocated memory block

Platform specific functions to find the size of a dynamically allocated memory block can be found using:

### Windows platform: 
- _msize();
- argument: pointer to memory block

### Linus platform: 
- malloc_usable_size();
- argument: pointer to memory block



  


