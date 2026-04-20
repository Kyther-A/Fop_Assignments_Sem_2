#include <stdio.h>

// Iterative approach to calculate factorial
long factorial_iterative(int n) {
    if (n < 0) return -1; // Invalid input
    
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive approach to calculate factorial
long factorial_recursive(int n) {
    if (n < 0) return -1; // Invalid input
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial_recursive(n - 1); // Recursive case
}

int main() {
    int num = 5;
    
    printf("Factorial of %d:\n", num);
    printf("Iterative approach: %ld\n", factorial_iterative(num));
    printf("Recursive approach: %ld\n", factorial_recursive(num));
    
    return 0;
}