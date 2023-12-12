// factorial of a number using recursion

#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factirial(n-1);
    }
}

int main()
{
    int n;
    printf("enter an positive number to find factorial\n");
    scanf("%d",&n);

    printf("the factorial of %d is %d",n,factorial(n));

    return 0;
}