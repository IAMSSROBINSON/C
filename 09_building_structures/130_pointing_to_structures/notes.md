# Pointing to structures

You can point to a struct data-type in the same way as a regular data-type. 

<br>

## Storing the address

In the case of pointing to the struct data-type the pointer stores the address of the start of the part of memory used to store the member data.

<br>

## Arrow operator (`->`) replaces dot operator (`.`)

The arrow operator can be used to replace the dot operator when pointing to structure members:

### Syntax:

```C
ptr_a->member;
// is the same as:
(*ptr_a).member;
```


