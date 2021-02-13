#include <cs50.h>
#include <stdio.h>

int summation(int n)
{
    // change from using iteration to using recursion
    int sum = 0;
    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}

int main(void)
{
    int n = get_int("Enter a number of 1 or more: ");
    printf("The sum of 1 through %i is: %i\n", n, summation(n));
}
