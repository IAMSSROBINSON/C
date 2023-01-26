# Doing pointer arithmetic

A pointer that has been created and assigned a memory address can be reassigned to another address or have the address moved using arithmetic. 

## ++, --

The increment and decrement operators can move the pointer forwards or backwards to reassigned it to a memory address for that data-type (The larger the data-type the bigger the memory address jump will be).

<br>

## +=, -=

The addition assignment and subtraction assignment operators can create even larger jumps in the memory address reassigned to the pointer by specifying how many places to jump to. 

<br>

## Array pointer arithmetic

Pointer arithmetic can be useful when using arrays because the elements in an array will occupy consecutive places in memory. 

When assigning just the name of an array to a pointer it will automatically assign the pointer to the address of the first element in the array and incrementing the pointer address by 1 will move the along to the next element's address. 


