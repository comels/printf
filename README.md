# _printf :page_facing_up:

A formatted output conversion C program completed as part of the low-level
programming and algorithm track at Holberton School. The program is a pseudo-
recreation of the C standard library function, `printf`.

## Dependencies :couple:

The `_printf` function was coded on an Ubuntu 14.04 LTS machine with `gcc` version 9.4.0

## Usage :running:

To use the `_printf` function, assuming the above dependencies have been installed,
compile all `.c` files in the repository and include the header `main.h` with
any main function.

Example `main.c`:
```
#include "main.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
}
```

Compilation:
```
$ gcc *.c -o tester
```

Output:
```
$ ./tester
Hello, World!
$
```

## Description :speech_balloon:

The function `_printf` writes output to standard output. The function writes
under the control of a `format` string that specifies how subsequent arguments
(accessed via the variable-length argument facilities of `stdarg`) are
converted for output.

Prototype: `int _printf(const char *format, ...);`

### Return Value

Upon successful return, `_printf` returns the number of characters printed
(excluding the terminating null byte used to end output to strings). If an
output error is encountered, the function returns `-1`.

### Format of the Argument String

The `format` string argument is a constant character string composed of zero
or more directives: ordinary characters (not `%`) which are copied unchanged
to the output stream; and conversion specifications, each of which results in
fetching zero or more subsequent arguments. Conversion specification is
introduced by the character `%` and ends with a conversion specifier. In
between the `%` character and conversion specifier, there may be (in order)
zero or more _flags_, an optional minimum _field width_, an optional
_precision_ and an optional _length_ modifier. The arguments must correspond
with the conversion specifier, and are used in the order given.

#### d, i
Example `main.c`:
```
int main(void)
{
    _printf("%d\n", 9);
}
```
Output:
```
9
```

#### c
The `int` argument is converted to an `unsigned char`.

Example `main.c`:
```
int main(void)
{
    _printf("%c\n", 48);
}
```
Output:
```
0
```

#### s
The `const char *` argument is expected to be a pointer to a character array
(aka. pointer to a string). Characters from the array are written starting
from the first element of the array and ending at, but not including, the
terminating null byte (`\0`).

Example `main.c`:
```
int main(void)
{
    _printf("%s\n", "Hello, World!");
}
```
Output:
```
Hello, World!
```

#### %
A `%` is written. No argument is converted. The complete conversion
specification is `%%`.

Example:
```
int main(void)
{
    _printf("%%\n");
}
```
Output:
```
%
```
## Authors :black_nib:

* Raphaël Chemouni <[rafyc](https://github.com/rafyc)>
* Côme le Sauter <[comels](https://github.com/comels)>

## License :lock:

This project is licensed under the MIT License - see the <[LICENSE](https://fr.wikipedia.org/wiki/Licence_MIT)>file for details.

## Acknowledgements :pray:

The `_printf` function emulates functionality of the C standard library
function `printf`. This README borrows from the Linux man page
[printf(3)](https://linux.die.net/man/3/printf).

This program was written as part of the curriculum for Holberton School.
Holberton School is a campus-based full-stack software engineering program
that prepares students for careers in the tech industry using project-based
peer learning. For more information, visit [this link](https://www.holbertonschool-france.com/).

<p align="center">
  <img src="https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" align="left" width="100" alt="Holberton School logo">
</p>
