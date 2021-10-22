# 0x09. C - Static libraries

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

## Requirements

### C

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

## Bash

* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line (why?)
* The first line of all your files should be exactly #!/bin/bash
* A README.md file, at the root of the folder of the project, describing what each script is doing
* All your files must be executable

## More Info

You do not need to learn about dynamic libraries, yet.

## Concept

If you want to creat a static library, you need to follow these steps :

       1. Copy all the file.c in the directory
       2. Create a main.h with all prototype. __Don't forget to add a double inclusion in your main.h__
       3. Verify all file.c are in the directory : ls -l
       4. Compile all of your file.c : gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
       5. Verify that your all file.c are duplicate with the extension .O : ls -l
       6. Create the library. For exemple, my librairy called "libmy" : ar -rc libmy.a *.o
       7. You can display a table listing the contents of your archive (=library) : ar -t libschool.a
       8. If you want to create or update your index : ranlib libmy.a