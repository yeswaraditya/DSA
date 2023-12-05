#include<stdio.h>


void merge(int a[],int low,int mid,int upper)
{
   int i=low, j=mid+1,k=0,b[upper+1];

   while(i<mid && j<upper)
   {
     if(a[i]<a[j])
     {
        b[k]=a[i];
        i++;
     }
     else
     {
        b[k]=a[j];
        j++;
    
     }
     k++;
   }

   if(i>mid)
   {
      while(j<upper)
      {
        b[k]=a[j];
        j++;
        k++;
      }
   }

   if(j>upper)
   {
     while(i<=mid)
     {
        b[k]=a[i];
        i++;
        k++;
     }

     for(i=0;i<upper;i++)
     {
        a[i]=b[i];
     }


   }
}
 void mergesort(int a[],int lower,int upper)
{
    int mid;
    if(lower<upper)
    {
        mid=(lower+upper)/2;
        mergesort(a,lower,mid);
        mergesort(a,mid+1,upper);
        merge(a,lower,mid,upper);
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

    mergesort(a,0,n-1);


    printf("\nSorted Array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}