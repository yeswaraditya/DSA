// Fibonacci series up to n terms
#include<stdio.h>

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }

}
int main()
{

    int n;
    printf("enter val of n");
    scanf("%d",&n);

    printf("the fibonacci series are\n");

    for(int i=0;i<=n;i++)
    {
        printf("%d\t",fibonacci(i));
    }
 

}
