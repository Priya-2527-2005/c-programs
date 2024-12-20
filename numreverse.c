#include<stdio.h>

void main() {
    int a[10], i = 0, j;

    // Taking input for 10 numbers using a while loop
    printf("Enter 10 numbers:\n");
    while (i < 10) {
        scanf("%d", &a[i]);
        i++;
    }

    // Printing the numbers entered using a while loop
    printf("The numbers are:\n");
    i = 0;  // Reset i to 0 for the next loop
    while (i < 10) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\n");

    // Printing numbers in reverse order (from last to first) using a while loop
    printf("The numbers from 0 to 10 in reverse order:\n");
    j = 9;  // Start from the last element (index 9)
    while (j >= 0) {
        printf("%d ", a[j]);
        j--;
    }
    printf("\n");
}
