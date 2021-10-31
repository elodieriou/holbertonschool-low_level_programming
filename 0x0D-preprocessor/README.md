# 0x0D. C - Preprocessor

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

## Requirements

### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* Don’t forget to push your header file
* All your header files should be include guarded

## Concept

Here, we will talk about preprocessor directives : `#include`, `#define`, and `macro`.

### #include

We used them to include header files `.h` in C program.

To include a `.h` file located in your IDE, you must use the angle brackets `< >`:
```
#include <stdio.h>
```

To include a `.h` file located in your project folder, you must instead use quotes:
```
#include "main.h"
```

All the contents of file.h are put inside file.c, where there is the `#include` file.h directive.

### #define

This directive is used to define a preprocessor constant. This allows a value to be associated with a word.

```
#define PI 3.14
```

You must write in order :
* the #define
* the word to which the value will be associated in UPPERCASE
* the value of the word

#### Arithmetic in the #define

The #define replace in your source code all words with their corresponding value.

It is possible to do some small arithmetic in the `#define`: addition (+), subtraction (-), multiplication (*), division (/) and modulo (%).

#### The predefined constants

In addition to the constants that you can define yourself, there are some constants predefined by the preprocessor.

Each of these constans begins and ends with two underscor_ symboles:
* `__LINE__` : gives the number the current line
* `__FILE__` : gives the name of the current file
* `__DATE__` : gives the date of the compilation
* `__TIME__` : gives the time of compilation

### The macros

When we use `#define` to find-replace a word with a source code, we say that we are creating a macro.

#### Macro without parameters

An example very simply:
```
#define COUCOU() printf("Coucou");
```

What changes here are the parentheses that have been added after the key word here `COUCOU()`:
```
#define COUCOU() printf("Coucou");

int main(int argc, char *argv[])
{
        COUCOU()

        return (0);
}
```

```
Coucou
```

The code we just saw will actually look like this when compiled:
```
int main(int argc, char *argv[])
{
 	printf("Coucou");

        return (0);
}
```

It is possible to put several lines of code at the same time.

#### Macro with parameters

Macros become really interesting when you put parameters to them:
```
#define MAJEUR(age) if (age >= 18) \
		    printf("Vous êtes majeur\n");

int main(int argc, char *argv[])
{
	MAJEUR(22)

	return (0);
}
```

```
Vous êtes majeur
```
