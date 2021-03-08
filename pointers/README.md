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
![Merge_Sort](https://raw.githubusercontent.com/jmichalenko/cs50labs/2020/pointers/pointing.png)


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
{%spoiler "What would the above code print?" %}
This code will print the address of n first (something similar to 0x12345678), and the value that is located at the address 50.
{% endspoiler}

Above, the *p is declared as a pointer, to the address of the variable n.  So after the pointer is declared, we can use the value %p/p to print the memory address; and also access the value stored at the address %i/*p.

{% next %}

## Your Turn

Try running the pointers.c file.  What happens?  Both stings become captialized.  This doesn't make sense?  One thing to remember is that a string is an array of characters.  So by making T = S, we are saying the pointer for T should point to the memory allocated for S. Then when T[0] is set to upper, it is changing the 1st character in the memory to upper, which again inadvertently is the same memory.

To make a copy of the string, we have to place the new copy in it's own memory.  This is done with the term "malloc" standing for memory allocation. To allocate enough memory for the length of the string a command similar to this could be used:
```c
char *t = malloc(strlen(s) + 1);
```
{% next %}

After the memory is used, create a for loop that iterates over each character in s, and assigns it to the newly allocated memory of t.

```c
t[i] = s[i];
```
Then use the to upper command to change just the first character of t.
```c
 t[0] = toupper(t[0]);
```
{% next %}
If the program is run too many times, the memory in your computer can run out, because you are physically reserving it.  To avoid any memory issues, we need to "free" the memory after our program runs by using the following command:

```c
free(t);
```

## Modify pointers.c file so that s is printed with lower case, and the first character in t is printed in uppercase.

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

