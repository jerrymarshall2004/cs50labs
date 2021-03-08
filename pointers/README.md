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
The address of a variable is called a pointer, which we can think of as a value that “points” to a location in memory. 

{% next %}

Some confusing syntax, the * can be used to declare a pointer variable; after it is declared, the * can be used to go to the address ad access the information at the memory location.


{% next %}

## Your Turn


{% spoiler "Does your program seem to hang?" %}


{% endspoiler %}

{% spoiler "Some Helper Videos on Pointers & Memory Allocation%}
Consider watching Doug's video on Mergsort.  Here is also a code along that might help if you are stuck.
{% video https://youtu.be/XISnO2YhnsY %}
{% video https://youtu.be/9uhSYDY4sxA %}
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

