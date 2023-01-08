# Converting data types

When compiling a program the compiler will implicitly convert one data-type into another if it deems it logical to do so e.g. if an int value is assigned to a float data-type variable then the complier will convert the int value to a floating point value and express it as such. 

<br>

## Casting
Any data-type stored in a variable can also be explicitly coerced into a variable of a different data-type by the process known as 'casting'.

> A cast states the data-type to which the variable should be converted in parenthesis prior to the name of the original variable (of a differing data-type) being converted.

Syntax:

newVariableName = (toModifierDataType)fromOriginalVariableName

```C
newVariableName = (int)fromOriginalVariableName;

// casting does not change the original data-type of the original variable it merely copies the value and converts it to a different data-type for a new variable
```