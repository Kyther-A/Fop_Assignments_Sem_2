#include <stdio.h>
#include <math.h>

void checkPrime(int num) {
    if (num < 2) {
        printf("Not prime\n");
        return;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not prime\n");
            return;
        }
    }
    printf("Prime\n");
}

void factorial(int num) {
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
        return;
    }
    long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial: %ld\n", fact);
}

void primeFactors(int num) {
    printf("Prime factors: ");
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    if (num > 1) {
        printf("%d", num);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Square root: %.2f\n", sqrt(num));
    printf("Square: %d\n", num * num);
    printf("Cube: %d\n", num * num * num);
    printf("Is prime: ");
    checkPrime(num);
    factorial(num);
    primeFactors(num);
    
    return 0;
}