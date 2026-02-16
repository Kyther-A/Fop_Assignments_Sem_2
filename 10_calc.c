#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double power(double x, double y) {
    return pow(x, y);
}

int main() {
    char operation;
    double num1, num2;
    int n;
    
    printf("=== Simple Calculator ===\n");
    printf("Operations: + - * / ^ !\n");
    printf("Enter operation: ");
    scanf("%c", &operation);
    
    switch (operation) {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '^':
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2f\n", power(num1, num2));
            break;
        case '!':
            printf("Enter a number: ");
            scanf("%d", &n);
            long long fact = factorial(n);
            if (fact == -1)
                printf("Error: Negative number\n");
            else
                printf("Result: %lld\n", fact);
            break;
        default:
            printf("Invalid operation\n");
    }
    
    return 0;
}