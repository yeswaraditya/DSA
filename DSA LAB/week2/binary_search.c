#include <stdio.h>

int main() {
    int n, low, high, mid, key;

    printf("Enter size of n: ");
    scanf("%d", &n);

    int a[n];

    low = 0;
    high = n - 1;

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found at index %d\n", mid);
            return 0;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found\n");

    return 0;
}

