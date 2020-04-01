# ft_printf
An implementation of **printf** function from the **C** standard library.
21 School training projet. 

To implement the display of floating-point numbers with maximum precision, arbitrary-precision arithmetic was used.

## Supported Features
Types:

>**%a %с %d %i %е %Е %f %g %G %о %O %s %u %х %X %р %%**

Additional types:

>**%C** and **%S** for printing Unicode character and string respectively

>**%b** for binary representation of number

>**%_** for printing the result of *ft_printf* to a file with the file description given as argument

Flags:

>0 +-#

Size modificators:
>h l j z L H

It also handle **width** and **precision**.

## Run
``make && make clean``

It compiles to libftprintf.a library which can be used as follow:

``gcc -c [source_file] -I ft_printf -L ft_printf/ -lftprintf``
