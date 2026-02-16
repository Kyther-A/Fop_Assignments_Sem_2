#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    
    if (sum == originalNum) {
        printf("%d is an Armstrong number\n", originalNum);
    } else {
        printf("%d is not an Armstrong number\n", originalNum);
    }
    
    return 0;
}