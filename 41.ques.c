#include <stdio.h>
#include <math.h>

int swapFirstLast(int num) {
    int digits = (int)log10(num); 
    int first = num / pow(10, digits); 
    int last = num % 10;              

    int middle = num % (int)pow(10, digits);

    middle = middle / 10;

    int swapped = last * pow(10, digits) + middle * 10 + first;
    return swapped;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = swapFirstLast(num);
    printf("Swapped number: %d\n", result);

    return 0;
}
