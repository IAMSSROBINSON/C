# Running a timer

To get the duration of an event the current time both before and after the event can be logged and the difference calculated:

## `difftime();` from `<time.h>` 

`difftime();` function from `time_t` data-type takes two arguments:

- subtracts the second argument from the first
- returns the difference in 'whole seconds' as a `double` data-type

<br>

## `clock();` from `<time.h>`

The `clock();` function from `<time.h>` header file allows for working with time also.

- returns processor time used since program began in 'clock ticks'
- can be used to pause execution of a program by running an empty loop until a future point in time is reached 

