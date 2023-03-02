# Getting the date and time

System time is calculated as the number of seconds the have gone by since the epoch event of 00:00:00 GMT on January 1st 1970.

The total count represents the current date and time in accordance with the Georgian calendar is referred to as 'Calendar time'.

<br>

## `<time.h>`

The `<time.h>` header file allows for functions to handle date and time as well as data-type struct called `tm` to store date and time components. 

<br>

## Date and time struct components

|Components										|Description												|
|:----------------------------|:----------------------------------|
|int tm_sec										|seconds after the minute, 0 - 59		|
|int tm_min										|minutes after the hour, 0 - 59			|
|int tm_hour									|hours since midnight, 0 - 23				|
|int tm_mday									|day of the month, 1 - 31						|
|int tm_mon										|months since january, 0 - 11				|
|int tm_year									|years since 1900										|
|int tm_wday									|days since sunday, 0 - 6						|
|int tm_yday									|days since january 1st, 0, 365			|
|int tm_isdst 								|is daylight saving time in effect	|

tm_isdst is positive if in effect, zero if not or negative if information is unavailable.
 
<br>

## Elapsed seconds

Current elapsed seconds is returned by time(NULL) function as a time_t data-type which can be given as the argument to a localtime() function for conversion to any of the various tm struct components

<br>

## `asctime()`

The `asctime()` function allows for outputting the struct components in a standard date and time format. 

Individual components can be output using special time format specifiers with the `strftime()` function. It requires 4 arguments: 

- char array, to store formatted date string
- maximum string length
- text and format specifiers to extract required components
- tm struct to be used
