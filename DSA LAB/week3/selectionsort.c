//selection sort
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter val of n");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        int min,t;
        min=i;
        
        for ( j = i+1; j < n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;


            }
        }

        t=a[min];
        a[min]=a[i];
        a[i]=t;
        
    }
        printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
}
      
}
    