# printf function

Welcome to the `printf` implementation project! This repository contains the source code for a simplified version of the `printf` function in the C programming language.


## Description

The `printf` function is a widely used function in C that allows you to print formatted output to the console. This custom `printf` implementation aims to provide a simplified version of the original function to help you understand how it works internally.

The custom `printf` function supports a limited set of format specifiers and does not include all the features of the standard `printf`. It is intended for educational purposes to demonstrate the core concepts of the function.

## Supported Format Specifiers

The custom printf implementation supports the following format specifiers:

- %d or %i: Signed integer.
- %u: Unsigned integer.
- %x or %X: Hexadecimal representation of an integer.
- %s: String.
- %%: Percent sign (to print a literal '%').

Please note that not all the features and format specifiers of the standard printf are supported in this custom implementation.

The custom `printf` function is used similarly to the standard `printf` function. You can use it to print formatted output to the console. Here's an example of how to use it:

```c
#include <stdio.h>
#include "myprintf.h"

int main() {
    int age = 12;
    char* name = "Leesam";

    myprintf("Hello, my name is %s and I am %d years old.\n", name, age);

    return 0;
}
```

---

Happy coding and keep learning!