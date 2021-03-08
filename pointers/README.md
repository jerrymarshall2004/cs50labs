# Pointers

In this lab you will learn:

- What a pointer is
- How to allocate and free memory

## What is a Pointer?
The physical address of a variable in memory is called a pointer. The * operator lets us “go to” the location that a pointer is pointing to.

For example, we might create a value n, and print it out:
```
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);
}
```
In our computer’s memory, there are now 4 bytes somewhere that have the binary value of 50, labeled n:
![Merge_Sort](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/mergesort/merge_sort.gif)

{% next %}

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

