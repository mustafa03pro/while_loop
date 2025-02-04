#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder;  // Append to reversed number
        n /= 10;                     // Remove the last digit
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}
