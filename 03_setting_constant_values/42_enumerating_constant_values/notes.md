# Enumerating constant values

Using the `enum` keyword allows for the creation of a sequence of integer constants (known as an enumeration set) inside of curly braces and separating each constant with a comma. A name for this sequence can also be optionally given:

<br>

### Syntax:
```C
enum NAME_OF_SEQUENCE{CONST_NAME_A, CONST_NAME_B, CONST_NAME_C, CONST_NAME_D};
```

<br>

### Values

With the count starting at 0, each of the constants will by default have a value of +1 greater than the constant before it. A specific value can be assigned to a constant and the +1 sequence continues from there unless it too is assigned a specific value and a set is allowed duplicate values:

```C
// MON HAS A VALUE OF 0 AND TUES HAS A VALUE OF 1
enum WEEKDAY_SET_A{MON, TUES, WED, THURS, FRI, SAT, SUN}; 

// MON HAS A VALUE OF 1 AND TUES HAS A VALUE OF 2
enum WEEKDAY_SET_B{MON = 1, TUES, WED, THURS, FRI, SAT, SUN}; 
```

