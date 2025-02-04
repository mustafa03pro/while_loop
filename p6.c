#include <stdio.h>

int main() {
    int n, i = 2, isPrime = 1;  // Start checking from 2

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    while (i * i <= n) {  // Check divisibility up to sqrt(n)
        if (n % i == 0) {
            isPrime = 0;  // Number is not prime
            break;
        }
        i++;
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
