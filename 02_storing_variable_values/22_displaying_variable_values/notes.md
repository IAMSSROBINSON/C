# Displaying variable values

The value of variables can be displayed using the `printf()` function. A format specifier must provided as an arguments in quotes `("%formatSpecifier")` within the parenthesis to specify the data-type being displayed along with the name of the variable.

```C
printf("%formatSpecifier", nameOfVariable);
```

<br>

|Format specifier: |Description: |Example: |
|:-------------|:-------------|:-------------|
|%d|An integer|100| 
|%ld|A long integer|123456789| 4 bytes
|%f|A floating point decimal number| 0.123456
|%c|A single character| 'A' (single char in single quotes)
|%s|A string of characters|"Hello World!" (string of multiple chars in double quotes)
|%p|A machine memory address|0x0022FF34

<br>

### Minimum number of spaces
A format specifier can ensure the output occupied a minimum number of spaces by stating the specific number after the % character e.g. `%7d` or `%07d` to fill the spaces with zero(0) characters.
`%f` can use a precision specifier e.g `%.2f` to state the desired decimal places to display the value to (`%.0f` for no decimal places). This can also be used with the minimum space specifier e.g. `%07.2f` will align the spaces to the left of the value when printed and `%-07.2f` to align the spaces to the right of the value.