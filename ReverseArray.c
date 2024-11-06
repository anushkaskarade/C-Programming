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

    // Display the array in reverse order
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
