#include<stdio.h>

int main(){
    int binnum, decimal=0, base=1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &binnum);

    while(binnum>0){
        rem = binnum % 10;
        decimal = decimal + rem * base;
        binnum = binnum / 10;
        base = base * 2;
    }
    printf("Decimal equivalent: %d", decimal);
    return 0;
} 