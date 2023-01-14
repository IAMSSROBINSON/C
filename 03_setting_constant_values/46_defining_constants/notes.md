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

<br>

## Example:

```C
#include <stdio.h>
#define LINE "_________________________________________"
#define TITLE "The C Programming Language"
#define AUTHOR "  Brian W. Kernighan; Dennis M. Ritchie"

// macro: to identify Windows host platform
#ifdef _WIN32
#define SYSTEM "Windows"
#endif

// macro: to identify Linux host platform
#ifdef linux
#define SYSTEM "Linux"
#endif

// macro: to identify Apple host platform
#ifdef __APPLE__
#define SYSTEM "Apple"
#endif


int main () {
	// print the string-text substituted by the preprocessor
	printf("\n\n\t%s\n\t\t%s\t\n\t%s\n",LINE, TITLE, LINE);
	printf("\t%s\t\n\n\n", AUTHOR);
	printf("\n\t\t\tOS:%s\n\n", SYSTEM);

	return 0;
}

/*
PRINTS:

                _________________________________________
                The C Programming Language
        _________________________________________
          Brian W. Kernighan; Dennis M. Ritchie



                        OS:Apple

					
/*
```

## List all constants

To see a list of all defined constants run command: cpp -dM define.c

<br>

```C
PRINTS:

#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.1,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_1_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_2 __attribute__((availability(macosx,introduced=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.2,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.2,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.2,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.2,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.2,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_2_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.3,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3 __attribute__((availability(macosx,introduced=10.3,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4 __attribute__((availability(macosx,introduced=10.3,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.3,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.3,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.3,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.3,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.3,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.3,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_3_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_4 __attribute__((availability(macosx,introduced=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.4,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.4,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.4,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.4,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.4,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_4_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEPRECATED__MAC_10_7 __attribute__((availability(macosx,introduced=10.5.DEPRECATED..MAC.10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.5,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.5,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.5,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5 __attribute__((availability(macosx,introduced=10.5,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_5_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6 __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_6_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.5,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.5,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.5,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.5,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_5_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.5)))
#define __AVAILABILITY_INTERNAL__MAC_10_6 __attribute__((availability(macosx,introduced=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.6,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.6,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.6,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.6,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.6,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_6_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.6)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.7,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7 __attribute__((availability(macosx,introduced=10.7,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_7_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8 __attribute__((availability(macosx,introduced=10.7,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_8_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9 __attribute__((availability(macosx,introduced=10.7,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_10_9_MSG(_msg) __attribute__((availability(macosx,introduced=10.7,deprecated=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_10_7_DEP__MAC_NA __attribute__((availability(macosx,introduced=10.7)))
#define __AVAILABILITY_INTERNAL__MAC_10_8 __attribute__((availability(macosx,introduced=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10 __attribute__((availability(macosx,introduced=10.8,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_10_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.10)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11 __attribute__((availability(macosx,introduced=10.8,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_11_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.11)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12 __attribute__((availability(macosx,introduced=10.8,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_12_MSG(_msg) __attribute__((availability(macosx,introduced=10.8,deprecated=10.12)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_10_13 __attribute__((availability(macosx,introduced=10.8,deprecated=10.13)))
#define __AVAILABILITY_INTERNAL__MAC_10_8_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.8)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_1 __attribute__((availability(macosx,introduced=10.9,deprecated=10.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3 __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_10_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.10.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_3 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_3_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.3)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_4 __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_11_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.11.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_1 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_1_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.1)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_2 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_2_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.2)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_4 __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_12_4_MSG(_msg) __attribute__((availability(macosx,introduced=10.9,deprecated=10.12.4)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_10_14 __attribute__((availability(macosx,introduced=10.9,deprecated=10.14)))
#define __AVAILABILITY_INTERNAL__MAC_10_9_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,introduced=10.9)))
#define __AVAILABILITY_INTERNAL__MAC_NA __attribute__((availability(macosx,unavailable)))
#define __AVAILABILITY_INTERNAL__MAC_NA_DEP__MAC_NA_MSG(_msg) __attribute__((availability(macosx,unavailable)))
#define __AVAILABILITY_VERSIONS__ 
#define __AVAILABILITY__ 
#define __BEGIN_DECLS 
#define __BIGGEST_ALIGNMENT__ 8
#define __BLOCKS__ 1
#define __BRIDGE_OS_VERSION_MIN_REQUIRED __ENVIRONMENT_BRIDGE_OS_VERSION_MIN_REQUIRED__
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wcast-qual\"") _Pragma("GCC diagnostic ignored \"-Wcast-align\"") _Pragma("GCC diagnostic ignored \"-Waddress-of-packed-member\"") ((type)(variable)) _Pragma("GCC diagnostic pop")
#define __CHAR16_TYPE__ unsigned short
#define __CHAR32_TYPE__ unsigned int
#define __CHAR_BIT__ 8
#define __CLANG_ATOMIC_BOOL_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __CLANG_ATOMIC_CHAR_LOCK_FREE 2
#define __CLANG_ATOMIC_INT_LOCK_FREE 2
#define __CLANG_ATOMIC_LLONG_LOCK_FREE 2
#define __CLANG_ATOMIC_LONG_LOCK_FREE 2
#define __CLANG_ATOMIC_POINTER_LOCK_FREE 2
#define __CLANG_ATOMIC_SHORT_LOCK_FREE 2
#define __CLANG_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __CONCAT(x,y) x y
#define __CONSTANT_CFSTRINGS__ 1
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_64_BIT_INO_T 1
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_##_mac(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_16_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_16_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_13_0(x) x
#define __DARWIN_C_ANSI 010000L
#define __DARWIN_C_FULL 900000L
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __DARWIN_NON_CANCELABLE 0
#define __DARWIN_NO_LONG_LONG 0
#define __DARWIN_NULL ((void *)0)
#define __DARWIN_ONLY_64_BIT_INO_T 1
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __DARWIN_ONLY_VERS_1050 1
#define __DARWIN_SUF_1050 
#define __DARWIN_SUF_64_BIT_INO_T 
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define __DARWIN_SUF_NON_CANCELABLE 
#define __DARWIN_SUF_UNIX03 
#define __DARWIN_UNIX03 1
#define __DARWIN_VERS_1050 1
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_DENORM_MIN__ 4.9406564584124654e-324
#define __DBL_DIG__ 15
#define __DBL_EPSILON__ 2.2204460492503131e-16
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define __DBL_MAX_10_EXP__ 308
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX__ 1.7976931348623157e+308
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN__ 2.2250738585072014e-308
#define __DECIMAL_DIG__ __LDBL_DECIMAL_DIG__
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define __DRIVERKIT_19_0 190000
#define __DRIVERKIT_20_0 200000
#define __DRIVERKIT_21_0 210000
#define __DRIVERKIT_VERSION_MIN_REQUIRED __ENVIRONMENT_DRIVERKIT_VERSION_MIN_REQUIRED__
#define __DYNAMIC__ 1
#define __ENABLE_LEGACY_IPHONE_AVAILABILITY 1
#define __END_DECLS 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 130000
#define __ENVIRONMENT_OS_VERSION_MIN_REQUIRED__ 130000
#define __FBSDID(s) 
#define __FINITE_MATH_ONLY__ 0
#define __FLT16_DECIMAL_DIG__ 5
#define __FLT16_DENORM_MIN__ 5.9604644775390625e-8F16
#define __FLT16_DIG__ 3
#define __FLT16_EPSILON__ 9.765625e-4F16
#define __FLT16_HAS_DENORM__ 1
#define __FLT16_HAS_INFINITY__ 1
#define __FLT16_HAS_QUIET_NAN__ 1
#define __FLT16_MANT_DIG__ 11
#define __FLT16_MAX_10_EXP__ 4
#define __FLT16_MAX_EXP__ 16
#define __FLT16_MAX__ 6.5504e+4F16
#define __FLT16_MIN_10_EXP__ (-4)
#define __FLT16_MIN_EXP__ (-13)
#define __FLT16_MIN__ 6.103515625e-5F16
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_DENORM_MIN__ 1.40129846e-45F
#define __FLT_DIG__ 6
#define __FLT_EPSILON__ 1.19209290e-7F
#define __FLT_EVAL_METHOD__ 0
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MANT_DIG__ 24
#define __FLT_MAX_10_EXP__ 38
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX__ 3.40282347e+38F
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN__ 1.17549435e-38F
#define __FLT_RADIX__ 2
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __GNUC_STDC_INLINE__ 1
#define __GNUC__ 4
#define __GXX_ABI_VERSION 1002
#define __IDSTRING(name,string) static const char name[] __used = string
#define __INT16_C_SUFFIX__ 
#define __INT16_FMTd__ "hd"
#define __INT16_FMTi__ "hi"
#define __INT16_MAX__ 32767
#define __INT16_TYPE__ short
#define __INT32_C_SUFFIX__ 
#define __INT32_FMTd__ "d"
#define __INT32_FMTi__ "i"
#define __INT32_MAX__ 2147483647
#define __INT32_TYPE__ int
#define __INT64_C_SUFFIX__ LL
#define __INT64_FMTd__ "lld"
#define __INT64_FMTi__ "lli"
#define __INT64_MAX__ 9223372036854775807LL
#define __INT64_TYPE__ long long int
#define __INT8_C_SUFFIX__ 
#define __INT8_FMTd__ "hhd"
#define __INT8_FMTi__ "hhi"
#define __INT8_MAX__ 127
#define __INT8_TYPE__ signed char
#define __INTMAX_C_SUFFIX__ L
#define __INTMAX_FMTd__ "ld"
#define __INTMAX_FMTi__ "li"
#define __INTMAX_MAX__ 9223372036854775807L
#define __INTMAX_TYPE__ long int
#define __INTMAX_WIDTH__ 64
#define __INTPTR_FMTd__ "ld"
#define __INTPTR_FMTi__ "li"
#define __INTPTR_MAX__ 9223372036854775807L
#define __INTPTR_TYPE__ long int
#define __INTPTR_WIDTH__ 64
#define __INT_FAST16_FMTd__ "hd"
#define __INT_FAST16_FMTi__ "hi"
#define __INT_FAST16_MAX__ 32767
#define __INT_FAST16_TYPE__ short
#define __INT_FAST32_FMTd__ "d"
#define __INT_FAST32_FMTi__ "i"
#define __INT_FAST32_MAX__ 2147483647
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_FMTd__ "lld"
#define __INT_FAST64_FMTi__ "lli"
#define __INT_FAST64_MAX__ 9223372036854775807LL
#define __INT_FAST64_TYPE__ long long int
#define __INT_FAST8_FMTd__ "hhd"
#define __INT_FAST8_FMTi__ "hhi"
#define __INT_FAST8_MAX__ 127
#define __INT_FAST8_TYPE__ signed char
#define __INT_LEAST16_FMTd__ "hd"
#define __INT_LEAST16_FMTi__ "hi"
#define __INT_LEAST16_MAX__ 32767
#define __INT_LEAST16_TYPE__ short
#define __INT_LEAST32_FMTd__ "d"
#define __INT_LEAST32_FMTi__ "i"
#define __INT_LEAST32_MAX__ 2147483647
#define __INT_LEAST32_TYPE__ int
#define __INT_LEAST64_FMTd__ "lld"
#define __INT_LEAST64_FMTi__ "lli"
#define __INT_LEAST64_MAX__ 9223372036854775807LL
#define __INT_LEAST64_TYPE__ long long int
#define __INT_LEAST8_FMTd__ "hhd"
#define __INT_LEAST8_FMTi__ "hhi"
#define __INT_LEAST8_MAX__ 127
#define __INT_LEAST8_TYPE__ signed char
#define __INT_MAX__ 2147483647
#define __IOS_AVAILABLE(_vers) __OS_AVAILABILITY(ios,introduced=_vers)
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __IOS_UNAVAILABLE __OS_AVAILABILITY(ios,unavailable)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __IPHONE_14_6 140600
#define __IPHONE_14_7 140700
#define __IPHONE_14_8 140800
#define __IPHONE_15_0 150000
#define __IPHONE_15_1 150100
#define __IPHONE_15_2 150200
#define __IPHONE_15_3 150300
#define __IPHONE_15_4 150400
#define __IPHONE_16_0 160000
#define __IPHONE_16_1 160100
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_2 80200
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __IPHONE_OS_VERSION_MIN_REQUIRED 110000
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_DIG__ 15
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_MAX_10_EXP__ 308
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LITTLE_ENDIAN__ 1
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define __LONG_MAX__ 9223372036854775807L
#define __LP64__ 1
#define __MACH__ 1
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_10 101000
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __MAC_10_11 101100
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define __MAC_10_12 101200
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define __MAC_10_13 101300
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __MAC_10_14 101400
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_10_15 101500
#define __MAC_10_15_1 101501
#define __MAC_10_15_4 101504
#define __MAC_10_16 101600
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define __MAC_11_4 110400
#define __MAC_11_5 110500
#define __MAC_11_6 110600
#define __MAC_12_0 120000
#define __MAC_12_1 120100
#define __MAC_12_2 120200
#define __MAC_12_3 120300
#define __MAC_13_0 130000
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __NO_INLINE__ 1
#define __OBJC_BOOL_IS_BOOL 1
#define __OPENCL_MEMORY_SCOPE_ALL_SVM_DEVICES 3
#define __OPENCL_MEMORY_SCOPE_DEVICE 2
#define __OPENCL_MEMORY_SCOPE_SUB_GROUP 4
#define __OPENCL_MEMORY_SCOPE_WORK_GROUP 1
#define __OPENCL_MEMORY_SCOPE_WORK_ITEM 0
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_PDP_ENDIAN__ 3412
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __OSX_DEPRECATED(_start,_dep,_msg) __OSX_AVAILABLE(_start) __OS_AVAILABILITY_MSG(macosx,deprecated=_dep,_msg)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) __OS_AVAILABILITY_MSG(macosx_app_extension,unavailable,_msg)
#define __OSX_UNAVAILABLE __OS_AVAILABILITY(macosx,unavailable)
#define __OS_AVAILABILITY(_target,_availability) __attribute__((availability(_target,_availability)))
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __P(protos) ()
#define __PIC__ 2
#define __POINTER_WIDTH__ 64
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_##ver
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __PTHREAD_ATTR_SIZE__ 56
#define __PTHREAD_CONDATTR_SIZE__ 8
#define __PTHREAD_COND_SIZE__ 40
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define __PTHREAD_MUTEX_SIZE__ 56
#define __PTHREAD_ONCE_SIZE__ 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __PTHREAD_SIZE__ 8176
#define __PTRDIFF_FMTd__ "ld"
#define __PTRDIFF_FMTi__ "li"
#define __PTRDIFF_MAX__ 9223372036854775807L
#define __PTRDIFF_TYPE__ long int
#define __PTRDIFF_WIDTH__ 64
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __REGISTER_PREFIX__ 
#define __SALC 0x4000
#define __SAPP 0x0100
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __SCHAR_MAX__ 127
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SHRT_MAX__ 32767
#define __SIGN 0x8000
#define __SIG_ATOMIC_MAX__ 2147483647
#define __SIG_ATOMIC_WIDTH__ 32
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_INT128__ 16
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_LONG__ 8
#define __SIZEOF_POINTER__ 8
#define __SIZEOF_PTRDIFF_T__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_SIZE_T__ 8
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZE_FMTX__ "lX"
#define __SIZE_FMTo__ "lo"
#define __SIZE_FMTu__ "lu"
#define __SIZE_FMTx__ "lx"
#define __SIZE_MAX__ 18446744073709551615UL
#define __SIZE_TYPE__ long unsigned int
#define __SIZE_WIDTH__ 64
#define __SLBF 0x0001
#define __SMBF 0x0080
#define __SMOD 0x2000
#define __SNBF 0x0002
#define __SNPT 0x0800
#define __SOFF 0x1000
#define __SOPT 0x0400
#define __SRD 0x0004
#define __SRW 0x0010
#define __SSP__ 1
#define __SSTR 0x0200
#define __STDC_HOSTED__ 1
#define __STDC_NO_THREADS__ 1
#define __STDC_UTF_16__ 1
#define __STDC_UTF_32__ 1
#define __STDC_VERSION__ 201710L
#define __STDC_WANT_LIB_EXT1__ 1
#define __STDIO_H_ 
#define __STRING(x) "x"
#define __SWIFT_UNAVAILABLE __OS_AVAILABILITY(swift,unavailable)
#define __SWR 0x0008
#define __TVOS_10_0 100000
#define __TVOS_10_0_1 100001
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __TVOS_14_6 140600
#define __TVOS_14_7 140700
#define __TVOS_15_0 150000
#define __TVOS_15_1 150100
#define __TVOS_15_2 150200
#define __TVOS_15_3 150300
#define __TVOS_15_4 150400
#define __TVOS_16_0 160000
#define __TVOS_16_1 160100
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define __TVOS_AVAILABLE(_vers) __OS_AVAILABILITY(tvos,introduced=_vers)
#define __TVOS_UNAVAILABLE __OS_AVAILABILITY(tvos,unavailable)
#define __TV_OS_VERSION_MIN_REQUIRED __ENVIRONMENT_TV_OS_VERSION_MIN_REQUIRED__
#define __TYPES_H_ 
#define __UINT16_C_SUFFIX__ 
#define __UINT16_FMTX__ "hX"
#define __UINT16_FMTo__ "ho"
#define __UINT16_FMTu__ "hu"
#define __UINT16_FMTx__ "hx"
#define __UINT16_MAX__ 65535
#define __UINT16_TYPE__ unsigned short
#define __UINT32_C_SUFFIX__ U
#define __UINT32_FMTX__ "X"
#define __UINT32_FMTo__ "o"
#define __UINT32_FMTu__ "u"
#define __UINT32_FMTx__ "x"
#define __UINT32_MAX__ 4294967295U
#define __UINT32_TYPE__ unsigned int
#define __UINT64_C_SUFFIX__ ULL
#define __UINT64_FMTX__ "llX"
#define __UINT64_FMTo__ "llo"
#define __UINT64_FMTu__ "llu"
#define __UINT64_FMTx__ "llx"
#define __UINT64_MAX__ 18446744073709551615ULL
#define __UINT64_TYPE__ long long unsigned int
#define __UINT8_C_SUFFIX__ 
#define __UINT8_FMTX__ "hhX"
#define __UINT8_FMTo__ "hho"
#define __UINT8_FMTu__ "hhu"
#define __UINT8_FMTx__ "hhx"
#define __UINT8_MAX__ 255
#define __UINT8_TYPE__ unsigned char
#define __UINTMAX_C_SUFFIX__ UL
#define __UINTMAX_FMTX__ "lX"
#define __UINTMAX_FMTo__ "lo"
#define __UINTMAX_FMTu__ "lu"
#define __UINTMAX_FMTx__ "lx"
#define __UINTMAX_MAX__ 18446744073709551615UL
#define __UINTMAX_TYPE__ long unsigned int
#define __UINTMAX_WIDTH__ 64
#define __UINTPTR_FMTX__ "lX"
#define __UINTPTR_FMTo__ "lo"
#define __UINTPTR_FMTu__ "lu"
#define __UINTPTR_FMTx__ "lx"
#define __UINTPTR_MAX__ 18446744073709551615UL
#define __UINTPTR_TYPE__ long unsigned int
#define __UINTPTR_WIDTH__ 64
#define __UINT_FAST16_FMTX__ "hX"
#define __UINT_FAST16_FMTo__ "ho"
#define __UINT_FAST16_FMTu__ "hu"
#define __UINT_FAST16_FMTx__ "hx"
#define __UINT_FAST16_MAX__ 65535
#define __UINT_FAST16_TYPE__ unsigned short
#define __UINT_FAST32_FMTX__ "X"
#define __UINT_FAST32_FMTo__ "o"
#define __UINT_FAST32_FMTu__ "u"
#define __UINT_FAST32_FMTx__ "x"
#define __UINT_FAST32_MAX__ 4294967295U
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_FMTX__ "llX"
#define __UINT_FAST64_FMTo__ "llo"
#define __UINT_FAST64_FMTu__ "llu"
#define __UINT_FAST64_FMTx__ "llx"
#define __UINT_FAST64_MAX__ 18446744073709551615ULL
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __UINT_FAST8_FMTX__ "hhX"
#define __UINT_FAST8_FMTo__ "hho"
#define __UINT_FAST8_FMTu__ "hhu"
#define __UINT_FAST8_FMTx__ "hhx"
#define __UINT_FAST8_MAX__ 255
#define __UINT_FAST8_TYPE__ unsigned char
#define __UINT_LEAST16_FMTX__ "hX"
#define __UINT_LEAST16_FMTo__ "ho"
#define __UINT_LEAST16_FMTu__ "hu"
#define __UINT_LEAST16_FMTx__ "hx"
#define __UINT_LEAST16_MAX__ 65535
#define __UINT_LEAST16_TYPE__ unsigned short
#define __UINT_LEAST32_FMTX__ "X"
#define __UINT_LEAST32_FMTo__ "o"
#define __UINT_LEAST32_FMTu__ "u"
#define __UINT_LEAST32_FMTx__ "x"
#define __UINT_LEAST32_MAX__ 4294967295U
#define __UINT_LEAST32_TYPE__ unsigned int
#define __UINT_LEAST64_FMTX__ "llX"
#define __UINT_LEAST64_FMTo__ "llo"
#define __UINT_LEAST64_FMTu__ "llu"
#define __UINT_LEAST64_FMTx__ "llx"
#define __UINT_LEAST64_MAX__ 18446744073709551615ULL
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __UINT_LEAST8_FMTX__ "hhX"
#define __UINT_LEAST8_FMTo__ "hho"
#define __UINT_LEAST8_FMTu__ "hhu"
#define __UINT_LEAST8_FMTx__ "hhx"
#define __UINT_LEAST8_MAX__ 255
#define __UINT_LEAST8_TYPE__ unsigned char
#define __USER_LABEL_PREFIX__ _
#define __VERSION__ "Apple LLVM 14.0.0 (clang-1400.0.29.202)"
#define __WATCHOS_1_0 10000
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_1_1 30101
#define __WATCHOS_3_2 30200
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_2 50200
#define __WATCHOS_5_3 50300
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __WATCHOS_7_5 70500
#define __WATCHOS_7_6 70600
#define __WATCHOS_8_0 80000
#define __WATCHOS_8_1 80100
#define __WATCHOS_8_3 80300
#define __WATCHOS_8_4 80400
#define __WATCHOS_8_5 80500
#define __WATCHOS_9_0 90000
#define __WATCHOS_9_1 90100
#define __WATCHOS_AVAILABLE(_vers) __OS_AVAILABILITY(watchos,introduced=_vers)
#define __WATCHOS_UNAVAILABLE __OS_AVAILABILITY(watchos,unavailable)
#define __WATCH_OS_VERSION_MIN_REQUIRED __ENVIRONMENT_WATCH_OS_VERSION_MIN_REQUIRED__
#define __WCHAR_MAX__ 2147483647
#define __WCHAR_TYPE__ int
#define __WCHAR_WIDTH__ 32
#define __WINT_MAX__ 2147483647
#define __WINT_TYPE__ int
#define __WINT_WIDTH__ 32
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __aarch64__ 1
#define __abortlike __dead2 __cold __not_tail_called
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define __apple_build_version__ 14000029
#define __arm64 1
#define __arm64__ 1
#define __array_decay_dicards_count_in_parameters 
#define __block __attribute__((__blocks__(byref)))
#define __clang__ 1
#define __clang_literal_encoding__ "UTF-8"
#define __clang_major__ 14
#define __clang_minor__ 0
#define __clang_patchlevel__ 0
#define __clang_version__ "14.0.0 (clang-1400.0.29.202)"
#define __clang_wide_literal_encoding__ "UTF-32"
#define __cold __attribute__((__cold__))
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __counted_by(N) 
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __dead 
#define __dead2 __attribute__((__noreturn__))
#define __deprecated __attribute__((__deprecated__))
#define __disable_tail_calls __attribute__((__disable_tail_calls__))
#define __ended_by(E) 
#define __enum_closed __attribute__((__enum_extensibility__(closed)))
#define __enum_closed_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_closed _name
#define __enum_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_open _name
#define __enum_open __attribute__((__enum_extensibility__(open)))
#define __enum_options __attribute__((__flag_enum__))
#define __exported __attribute__((__visibility__("default")))
#define __exported_pop _Pragma("GCC visibility pop")
#define __exported_push _Pragma("GCC visibility push(default)")
#define __has_ptrcheck 0
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define __header_bidi_indexable 
#define __header_indexable 
#define __header_inline inline
#define __kernel_data_semantics 
#define __kernel_dual_semantics 
#define __kernel_ptr_semantics 
#define __kpi_deprecated(_msg) 
#define __kpi_deprecated_arm64_macos_unavailable 
#define __kpi_unavailable 
#define __llvm__ 1
#define __nonnull _Nonnull
#define __not_tail_called __attribute__((__not_tail_called__))
#define __null_terminated 
#define __null_terminated_to_indexable(P) (P)
#define __null_unspecified _Null_unspecified
#define __nullable _Nullable
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define __options_closed_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_closed __enum_options _name
#define __options_decl(_name,_type,...) typedef enum : _type __VA_ARGS__ __enum_open __enum_options _name
#define __osloglike(fmtarg,firstvararg) __attribute__((__format__ (__os_log__, fmtarg, firstvararg)))
#define __pic__ 2
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __ptrcheck_abi_assume_single() 
#define __ptrcheck_abi_assume_unsafe_indexable() 
#define __pure 
#define __pure2 __attribute__((__const__))
#define __restrict restrict
#define __result_use_check __attribute__((__warn_unused_result__))
#define __returns_nonnull __attribute((returns_nonnull))
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __sfileno(p) ((p)->_file)
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __single 
#define __sized_by(N) 
#define __sputc(c,p) (--(p)->_w < 0 ? (p)->_w >= (p)->_lbfsize ? (*(p)->_p = (c)), *(p)->_p != '\n' ? (int)*(p)->_p++ : __swbuf('\n', p) : __swbuf((int)(c), p) : (*(p)->_p = (c), (int)*(p)->_p++))
#define __stateful_pure __attribute__((__pure__))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __strong 
#define __swift_unavailable(_msg) __attribute__((__availability__(swift, unavailable, message=_msg)))
#define __terminated_by(T) 
#define __terminated_by_to_indexable(P) (P)
#define __unavailable __attribute__((__unavailable__))
#define __unreachable_ok_pop _Pragma("clang diagnostic pop")
#define __unreachable_ok_push _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wunreachable-code\"")
#define __unsafe_forge_bidi_indexable(T,P,S) ((T)(P))
#define __unsafe_forge_single(T,P) ((T)(P))
#define __unsafe_indexable 
#define __unsafe_late_const 
#define __unsafe_null_terminated_from_indexable(P,...) (P)
#define __unsafe_null_terminated_to_indexable(P) (P)
#define __unsafe_terminated_by_from_indexable(T,P,...) (P)
#define __unsafe_terminated_by_to_indexable(P) (P)
#define __unsafe_unretained 
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __weak __attribute__((objc_gc(weak)))
#define clearerr_unlocked(p) __sclearerr(p)
#define const __const
#define feof_unlocked(p) __sfeof(p)
#define ferror_unlocked(p) __sferror(p)
#define fileno_unlocked(p) __sfileno(p)
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define getc_unlocked(fp) __sgetc(fp)
#define getchar_unlocked() getc_unlocked(stdin)
#define inline __inline
#define putc_unlocked(x,fp) __sputc(x, fp)
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define signed __signed
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define stderr __stderrp
#define stdin __stdinp
#define stdout __stdoutp
#define volatile __volatile
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
20 errors generated.
ssr@SSRs-Laptop 46_defining_constants % 

```





