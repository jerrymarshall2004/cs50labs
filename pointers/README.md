# Pointers

In this lab you will learn:

- What a pointer is
- How to allocate and free memory

## What is a Pointer?
The physical address of a variable in memory is called a pointer. The * operator lets us “go to” the location that a pointer is pointing to.

For example, we might create a value n, and print it out:
```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);
}
```
In our computer’s memory, there are now 4 bytes somewhere that have the binary value of 50, labeled n:

![Merge_Sort](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/pointers/memory.png)

{% next %}
It turns out that, with the billions of bytes in memory, those bytes for the variable n starts at some unique address that might look like 0x12345678.

In C, we can actually see the address with the & operator, which means “get the address of this variable”. Notice the placeholder is %p.
```c
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}
```
This would print out the address, maybe something like 0x12345678.

The address of a variable is called a pointer, which we can think of as a value that “points” to a location in memory. 

{% next %}

Some confusing syntax, the * can be used to declare a pointer variable; after it is declared, the * can be used to go to the address and access the information at the memory location.

```c
#include <stdio.h>

int main(void)
{
   int n = 50;
   int *p = &n;
   printf("%p\n", p);
   printf("%i\n", *p);
}
```
Above, the *p is declared as a pointer, to the address of the variable n.  So after the pointer is declared, we can use the value %p/p to print the memory address; and also access the value stored at the address %i/*p.

{% next %}

Try running the toupper.c file.  What happens?  Both stings become captialized.  This doesn't make sense?  But what has happened is that the memory allocated for s has been set to the value of t.  Or in other words the pointer. 

## Your Turn


{% spoiler "Does your program seem to hang?" %}


{% endspoiler %}

{% spoiler "Some Helper Videos on Pointers & Memory Allocation%}
Consider watching these videos on pointers. This is a complex topic and will take a bit to wrap your brain around. 
{% video https://youtu.be/XISnO2YhnsY %}
{% video https://youtu.be/9uhSYDY4sxA %}
{% video https://youtu.be/5VnDaHBi8dM %}
{% endspoiler %}

## Style Check
Be sure to check your style:

```
style50 pointers.c
```
## Check Your program before submitting
```
check50 jmichalenko/labchecks/main/pointers
```
## Submit your work
```
submit50 jmichalenko/labchecks/main/pointers
```

