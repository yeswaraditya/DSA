 // insertion sort
 #include<stdio.h>
 int main()
 {
    int i,n,j,min;
    printf("enter val of n");
    scanf("%d",&n);


    int a[n];
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
         min=a[i]; 
        j=i-1;
        
            while(j>=0 && a[j]>min)
            {
               a[j+1]=a[j];
               j--;
            }
        
        

    a[j+1]=min;
    }
    
        printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
 }
 }