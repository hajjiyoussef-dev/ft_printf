# ft_printf

**ft_printf** is a project from 42 Network where I implemented my own version of the standard `printf` function in C. This project deepened my understanding of variadic functions, formatting, memory management, and how to work with low-level C data types. 

---

## Features

- Custom implementation of the `printf` function.
- Support for multiple format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%f`, and more.
- Handles width, precision, and flags like `-`, `+`, `0`, and `#`.
- Flexible for various types and allows precise formatting.
- Ability to handle multiple arguments of different types.

---

## Usage

## Function Prototype:

```c
int ft_printf(const char *format, ...);

This function behaves similarly to the standard printf, allowing you to format strings with different specifiers.

## Example:

#include "ft_printf.h"

int main() {
    ft_printf("Hello, world! %d %s\n", 42, "42 Network");
    return 0;
}

# Output:
<h1> Hello, world! 42 42 Network </h1>
````

 ## Supported Format Specifiers
. %c: character
. %s: string
. %p: pointer
. %d / %i: signed decimal integer
. %u: unsigned decimal integer
. %x: unsigned hexadecimal integer (lowercase)
. %X: unsigned hexadecimal integer (uppercase)
. %f: floating-point number
. %n: stores the number of characters printed so far

# Installation
1. Clone the repository:
    git clone https://github.com/hajjiyoussef-dev/ft_printf.git
    cd ft_printf

2. Compile the project:
    make

3. You can now include ft_printf.h and use ft_printf in your C projects.

# Testing
To test the ft_printf function, I recommend writing unit tests or using it in any C project where formatted output is needed. You can also compare its output to the standard printf for verification.

# Contributions
    Feel free to open issues, fork the repository, and submit pull requests. Any suggestions for improvements or new features are welcome!

# License
    This project is licensed under the MIT License - see the LICENSE file for details.

# Author
    Created by yhajji, part of the 42 Network curriculum.















