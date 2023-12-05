#include <stdio.h>



int main() {
    int n, key;

    printf("Enter size of n: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]); // Use a[i] instead of a[n]
    }

    printf("Enter a number to find: ");
    scanf("%d", &key);


    for (int i = 0; i < n; i++)
    {
        if(a[i]==key)
        {
            printf("element found at index %d",i);
            return 0;
        }
       
    }
        printf("element dosent exist");

   

    return 0;
}
