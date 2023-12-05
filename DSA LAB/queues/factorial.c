#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main()
{   int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=factorial(n);
    printf("%d",result);
    
}