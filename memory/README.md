# Memory

Within our computer’s memory, the different types of data that need to be stored for our program are organized into different sections:

![memorylayout](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/memory/memory_layout.png)

The machine code section is our compiled program’s binary code. When we run our program, that code is loaded into the “top” of memory.
Globals are global variables we declare in our program or other shared variables that our entire program can access.
The heap section is an empty area where malloc can get free memory from, for our program to use.
The stack section is used by functions in our program as they are called. For example, our main function is at the very bottom of the stack, and has the local variables

{% next %}

## Your Turn





{% spoiler "Some Helper Videos on Pointers & Memory Allocation%}

{% endspoiler %}

## Style Check
Be sure to check your style:

```
style50 swap.c
```
## Check Your program before submitting
```
check50 jmichalenko/labchecks/main/swap
```
## Submit your work
```
submit50 jmichalenko/labchecks/main/swap
