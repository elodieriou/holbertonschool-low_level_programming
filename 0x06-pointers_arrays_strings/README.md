# Project 0x06. C - More pointers, arrays and strings

## Requirements

### General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
    You are allowed to use _putchar
    You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    Don’t forget to push your header file

## Quiz questions

Question #0

var = "Best";

What is the type of var?

    string

    char *

    int *

Question #1

What is wrong with the following code?

int n = 5;
int array[10];
int i = 3;

array[n] = i;

    Nothing is wrong

    It is impossible to declare the variable array this way

    The array array is not entirely initialized

    It is not possible to access array[n]

Question #2

What is wrong with the following code?

int n = 5;
int array[n];
int i = 3;

array[n] = i;

    Nothing is wrong

    It is impossible to declare the variable array this way

    The array array is not entirely initialized

    It is not possible to access array[n]

Question #3

What is wrong with the following code?

int n = 5;
int array[5];
int i = 3;

array[n] = i;

    Nothing is wrong

    It is impossible to declare the variable array this way

    The array array is not entirely initialized

    It is not possible to access array[n]

Question #4

Why is it important to reserve enough space for an extra character when declaring/allocating a string?

    In case we need one

    For memory alignment

    For the null byte (end of string)

    For fun

Question #5

What is/are the difference(s) between the two following variables? (Except their names)

char *s1 = "";
char *s2 = NULL;

    They are the same

    The first one points to a 0-byte, the second one points to 0

    The first one points to 0, the second one points to a 0-byte

    The first one can be dereferenced, not the second one

    The second one can be dereferenced, not the first one

Question #6

What happens when one tries to dereference a pointer to NULL?

    Nothing

    Segmentation fault

    Kernel panic

    World War Z
