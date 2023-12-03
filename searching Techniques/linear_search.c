#include<stdio.h>
int main()
{
    int n,key,found;

    printf("enter size of array\n");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: \n");
        scanf("%d", &a[i]);
    }

    printf("enter key to search");
    scanf("%d",&key);

    for(int i=1;i<n;i++)
    {
        if(a[i]==key)
        {
            //if element is found assign 1 to found
            found=1;
            printf("element found at index %d \n",i);
            break;
        }
    }
        if(found!=1)
        printf("enter element not found");

    
}