#include<stdio.h>

int main()
{
    int n,i;

    printf("enter size of array\n");
    scanf("%d",&n);

    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
   
    for(i=0;i<n;i++)
    {
        int min=a[i];

        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                 min=j;
            }
        }
        int t =a[i];
            a[i]=a[min];
            a[min]=t;
        
    }
         printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
}
}