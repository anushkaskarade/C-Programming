#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(char binary[], int len) {
    if (len == 0) {
        return 0;
    } else {
        int last_digit = binary[len - 1] - '0';
        return last_digit + 2 * binaryToDecimal(binary, len - 1);
    }
}
void decimalToBinary(int decimal) {
    if (decimal > 1) {
        decimalToBinary(decimal / 2);
    }
    printf("%d", decimal % 2);
}

int main() {
    int choice;
    char binary[100];
    int decimal;

    printf("Choose the conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the binary number: ");
            scanf("%s", binary);
            int len = strlen(binary);
            int decimalValue = binaryToDecimal(binary, len);
            printf("Decimal value: %d\n", decimalValue);
            break;
        case 2:
            printf("Enter the decimal number: ");
            scanf("%d", &decimal);
            printf("Binary value: ");
            decimalToBinary(decimal);
            printf("\n");
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}

