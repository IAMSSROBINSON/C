# Debugging definitions

Conditional branching can be used to execute different sections of code according to the result of the evaluation. The preprocessor instructions used for this are:

- #if
- #else
- #elif (else if) 

<br>

### Undefine

A preprocessor instruction to `#define` a constant can also be undefined with an `#undef` instruction. Also to evaluate whether a constant is undefined the instruction `#ifndef` (if not defined) can be used. 

<br>

### Debugging source code with debug macro status

Evaluating macro status in this way can be done using a function block. Their usage can hide and reveal different sections of code simply by change the status of a 'debug macro' and this can be useful for debugging source code. 

