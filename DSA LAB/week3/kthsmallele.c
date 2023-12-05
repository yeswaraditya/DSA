#include<stdio.h>
int main()
{
    int n,i,a[n];
    printf("enter val od n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


     for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    int k;
     printf("Enter vvalue to find kth samllest element:");
    scanf("%d",&k);
    printf("The kth Smallest element is:");
    printf("%d",a[k-1]);
}