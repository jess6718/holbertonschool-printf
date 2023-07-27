# holbertonschool-printf

This repository contains the source code for the printf function implementation as part of the Holberton School curriculum. The project aims to replicate the functionality of the standard C library function printf and covers specifiers %c, %s, %d, %i, and %%.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Speficiers](#supportedSpeficiers)
- [Authors](#authors)

## Introduction

The printf function is a widely used function in the C programming language that allows formatted output to the standard output stream. This project's purpose is to create a custom implementation of the printf function with limited support for specific specifiers.

## Installation

1. Clone the repository to your local machine:
```bash
git clone https://github.com/jess6718/holbertonschool-printf
```

2. Compile the source files using the supplied makefile:
```bash
https://github.com/jess6718/holbertonschool-printf/blob/main/Makefile
```

## Usage
To use the _printf function, include the "main.h" header file in your C program:

```c
#include "main.h"
```

Use the _printf function in your code to print formatted output:

```c
int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("The value of pi is approximately %f\n", 3.14159);
    return (0);
}
```

## Supported Formats
The _printf function currently supports the following format specifiers:
-%c: Print a character
-%s: Print a string
-%d: Print an integer
-%i: Print an integer
-%%: Print a percent sign

## Authors
Alicia Tan, Duncan Maclennan and Jessica Mo

## Flow Diagram of _printf
![image](https://raw.githubusercontent.com/jess6718/holbertonschool-zero_day/master/printf_flowchart.png)
