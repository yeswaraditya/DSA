#include<stdio.h>

int partition(int a[],int low,int high)
{
   int pivot=a[0],start=low,end=high;

   while(start<end)
   {
      while(a[start]<=pivot)
      {
        start++;
      }
      while(a[end]>pivot)
      {
        end--;
      }

      if(start<end)
      {
        int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
      }
   }
   int temp=a[low];
   a[low]=a[end];
   a[end]=temp;
    return end;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int location=partition(a,low,high);
        quicksort(a,low,location-1);
        quicksort(a,location+1,high);
    }
}
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


    quicksort(a,0,n-1);

    printf("\nSorted Array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}