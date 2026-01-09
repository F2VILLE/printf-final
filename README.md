*This project has been created as part of the 42 curriculum by fdeville*

# ft_printf

## Description

This is a reimplementation of the `printf` function.
The function seeks to simplify the printing of different types, such as numbers, pointers, etc...

## Instructions

To build the project, use the Makefile :

```
make all
```
This command will build the current project with the libft folder and output a `libftprintf.a` library that can then be included in a project using gcc.

## Resources

I didn't use AI in this project, I used resources like geeksforgeeks or W3School to learn about the va_arguments.
StackOverflow to debug problems I encountered. 

# Explanation of chosen algorithm and data structure

To make this project, I simply iterate through each character of the given string and call a function that will do the wanted behavior of the char following the trigger ('%') char.
To keep track of the number of char written, each function (putnbr, putstr, putptr, etc) returns the number of char wrote using the function write.
