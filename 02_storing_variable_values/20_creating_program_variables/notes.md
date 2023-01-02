# Creating program variables

A variable is a container that can store a value inside the computer memory. This value can be referenced using a meaningful variable name (that conforms to naming conventions) = this is the variable declaration. 

### Variable declaration syntax:

```C
data-type variableName;
```

data-type: specifies the type of data the variable will contain.

variableName: specifies the name given to reference the value that the variable will contain. 

Multiple variables can be declared of the same data-type on the same declaration: 

```C
data-type variableName01, variableName02, variableName03, variableName04;
```

<br>

## Data types

|Data type: |Description: |Example: |Memory: |
|:-------------|:-------------|:-------------|:-------------|
|char|single character|'A'| 1 byte
|int|integer whole number |100| 4 bytes
|float|floating point decimal number(to 6 dp)| 0.123456 | 4 bytes
|double|floating point decimal number(to 10 dp)| 0.0123456789| 8 bytes

## Tips
- Make variable declarations where possbile at the top of the program before executable code.
- A variable is initialized when a value is assigned to it using the assignment operator `=` either at declaration or otherwise.

```C
data-type L-value-object-variableName = R-value-object-variableValue
```
