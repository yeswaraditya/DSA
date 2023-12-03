#include<stdio.h>

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;

    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{
    int n;
    printf("enter val of n\n");
    scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
    printf("the series are %d \n",fibonacci(i));

    }
}