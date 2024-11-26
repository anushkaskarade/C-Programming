#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String: %s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase for case-insensitive comparison

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
