# Defining constants

<br>

## `#define`

Using the `#define` preprocessor instruction at the start of the program (with other preprocessor instructions that get substituted before compilation) allows for using a specified constant text value throughout the program:

### Syntax:

#define CONSTANT-NAME "string-text"

<br>

## `#ifdef`, `#define`, `#endif`

The `ifdef` preprocessor instruction can conditionally be used to asses whether a definition in particular already exists. If is doesn't exist then a `#define` preprocessor instruction is used to create one. To end the cycle an `#endif` preprocessor instruction is added to the end. This whole preprocessor routine is know as a 'macro'.

<br>

## Compiler defined constants

A preprocessor 'macro' cycle can analyze compiler-defined constants to work out what operating system is being used by the host. This can be different for different machines but with a Windows platformed machine a constant named: _WIN32, and on a Linux platform the presence of a linux constant will usually be present and an `#ifdef` preprocessor directive and appropriate text string can be applied to check the host platform.







