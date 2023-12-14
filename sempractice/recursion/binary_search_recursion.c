#include<stdio.h>

int binary_search_recursion(int a[],int low,int high,int key)
{
    int mid;
    mid=(low+high/2);

    if(low<high)
    {
        if(key==a[mid])
        {
            return mid;
        }
        else if (key<a[mid])
        {
           return binary_search_recursion(a,low,mid-1,key);
        }
        else
        {
            return binary_search_recursion(a,mid+1,high,key);
        }
    }

    return -1;
}

int main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter element: ");
        scanf("%d",&a[i]);
    }

    int key;
    printf("enter element to search");
    scanf("%d",&key);


    

    int result=binary_search_recursion(a,0,n-1,key);

    if(result==-1)
    {
        printf("element not found");

    }
    else
    {
        printf("element found at index %d",result);
    }
}