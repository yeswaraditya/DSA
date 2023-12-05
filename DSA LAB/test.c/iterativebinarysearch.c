#include<stdio.h>

int main()
{
    int n, key,low,high,mid,i;

    printf("Enter size of n: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]); // Use a[i] instead of a[n]
    }

    printf("Enter element to find: ");
    scanf("%d", &key);


 
    low=0;
    high=n-1;
     while(low<=high)
     {
        mid=(low+high)/2;

     if(key>a[mid])
     {
        low=mid+1;

     }
     else if(key<a[mid])
     {
        high=mid-1;

     }
     else
     {
        printf("element found at index %d",mid);
        return 0;

     }
     }
     return 0;

}