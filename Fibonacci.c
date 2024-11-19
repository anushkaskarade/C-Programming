#include <stdio.h>

// Function to calculate the nth Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 0)
        return -1; // Invalid input

    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    int i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of terms should be greater than 0.\n");
        return 1;
    }

    printf("Fibonacci series up to %d terms: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
