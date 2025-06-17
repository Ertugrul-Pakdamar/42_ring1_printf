# ft_printf

This project is a standalone reimplementation of the basic functionalities of the standard `printf` function in C, under the name `ft_printf`. The project supports various data types and formatting options.

## Features

- `%c` : Prints a character
- `%s` : Prints a string
- `%d` / `%i` : Prints a signed integer
- `%u` : Prints an unsigned integer
- `%x` : Prints a hexadecimal number in lowercase
- `%X` : Prints a hexadecimal number in uppercase
- `%p` : Prints a pointer address in hexadecimal
- `%%` : Prints a percent sign

## File Structure

- `ft_printf.c` : Implementation of the main `ft_printf` function
- `ft_printf.h` : Function prototypes and macros
- `ft_putchar.c` : Character printing function
- `ft_putstr.c` : String printing function
- `ft_putnbr.c` : Signed integer printing function
- `ft_putunsigned.c` : Unsigned integer printing function
- `ft_putnbr_base.c` : Function to print numbers in different bases
- `Makefile` : Build instructions

## Installation and Compilation

To compile the project, run the following command in your terminal:

```sh
make
```

This will generate a static library file named `libftprintf.a`.

## Usage

To include this project in your own project:

1. Copy the `libftprintf.a` file into your project directory.
2. Include the `ft_printf.h` header file in your project.
3. Compile your project linking against `libftprintf.a`:

	```sh
	cc -o my_program my_program.c -L. -lftprintf
	```

You can now use the `ft_printf` function:

```c
#include "ft_printf.h"

int main()
{
	ft_printf("Hello, %s!\n", "world");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hex: %x\n", 255);
	return 0;
}
```

## Contributing

If you would like to contribute to this project, please submit a pull request. If you find any bugs or have suggestions for improvements, feel free to open an issue.
