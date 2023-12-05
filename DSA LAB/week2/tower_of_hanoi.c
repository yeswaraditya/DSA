#include <stdio.h>

void towerofhanoi(int n,char source,char auxilary,char destination)
{
    if(n==1)
    {
         printf("Move disk 1 from %c to %c\n", source, destination);
        return ;
    }

   

    towerofhanoi(n-1,source,destination,auxilary);

    printf("Move disk %d from %c to %c\n", n, source, destination);

    towerofhanoi(n-1,auxilary,source,destination);
}

int main()
{   int n;
    printf("enter no of disks");
    scanf("%d",&n);

    towerofhanoi(n,'a','b','c');
    
}