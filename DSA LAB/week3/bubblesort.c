//bubble sort

#include<stdio.h>

int main()
{
    int n,i,t;
    printf("enter value of n");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
           {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
           }
        }

    }

    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
       
    }

return 0;

}