#include<stdio.h>
int main()
{
    int low,high,n,mid,key,found;

    printf("enter size of array\n");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: \n");
        scanf("%d", &a[i]);    
    }

    printf("enter key to search");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(key==a[mid])
        {
            found=1;
            printf("element found at index %d\n ",mid);
            break;//use break to stop continues loop
        }
       else if(key<a[mid])
        {
            high=mid-1;
        }
       else 
        {
            low=mid+1;
        }

    }
    if(found!=1)
    {
        printf("element not found");
    }
}