#include<stdio.h>

int recursivebinsearch(int arr[],int low,int high,int key)
{
    if(low<=high)
    {
      int mid=(low+high)/2;

      if(arr[mid]==key)
      {
        return mid;
      }

      if(key>arr[mid])
      {
        return recursivebinsearch(arr,mid+1,high,key);
      }
      if(key<arr[mid])
      {
        return recursivebinsearch(arr,low,mid-1,key);
      }



    }

    return -1;

    
}

int main()
{
    int n,key;
    printf("Enter size of n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &arr[i]); // Use a[i] instead of a[n]
    }

    printf("Enter element to find: ");
    scanf("%d", &key);

    int result=recursivebinsearch(arr,0,n-1,key);

    if(result!=-1)
    {
        printf("val found at index %d",result);
    }
   else{
    printf("element not found");
   }
}