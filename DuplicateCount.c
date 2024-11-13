#include <stdio.h>

int main() {
    int n;
    int i,j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int duplicateCount = 0;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
