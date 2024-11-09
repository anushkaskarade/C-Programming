#include <stdio.h>

int main() {
    int n;
    int i;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int evenArr[n], oddArr[n];
    int evenCount = 0, oddCount = 0;
    

    // Read the elements of the array from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate the odd and even elements into separate arrays
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Display the even elements array
    printf("Even elements array: ");
    for ( i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\n");

    // Display the odd elements array
    printf("Odd elements array: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    printf("\n");

    return 0;
}

