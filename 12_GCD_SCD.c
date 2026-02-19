#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findSCD(int a, int b) {
    int smaller = (a < b) ? a : b;
    
    for (int i = 2; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int scd = findSCD(num1, num2);
    int gcd = findGCD(num1, num2);
    
    printf("Smallest Common Divisor (other than 1): ");
    if (scd == 1) {
        printf("None\n");
    } else {
        printf("%d\n", scd);
    }
    
    printf("Greatest Common Divisor: %d\n", gcd);
    
    return 0;
}