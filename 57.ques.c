#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}