#include<stdio.h>

int binarySearchRecursion(int a[],int low,int high,int key)
{
    
    int mid=(low+high)/2;
   
      if(low<=high)
      {
        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            binarySearchRecursion(a,low,mid-1,key);
        }
        else{
            binarySearchRecursion(a,low,mid+1,key);
            
        }
      }

        return -1;
    
    
}
int main()
{
    int n,key;

    printf("enter size of array\n");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: \n");
        scanf("%d", &a[i]);    
    }

    printf("enter key to search");
    scanf("%d",&key);

  int result=  binarySearchRecursion(a,0,n-1,key);
   if(result!=-1)
    {
        printf("val found at index %d",result);
    }
   else{
    printf("element not found");
   }

   
}