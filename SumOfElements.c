Q 1-2
#include <stdio.h>

int main() {
    int n;
    int i;
    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of elements in the array
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum of elements
    printf("Sum of elements: %d\n", sum);

    return 0;
}
