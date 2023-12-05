//Develop a program to find kth smallest number in an array

#include<stdio.h>

int main()
{
    int n;
    
    printf("enter the value of n");
    scanf("%d",&n);

    int a[n],i;

    for(i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
    }

    int min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("the smallest element in the array %d",min);
    return 0;
}