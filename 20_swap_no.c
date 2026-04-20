#include <stdio.h>

void swap_without_pointers(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap_with_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    
    printf("Original values: x = %d, y = %d\n\n", x, y);
    
    // Using pointers
    swap_with_pointers(&x, &y);
    printf("After swap (with pointers): x = %d, y = %d\n", x, y);
    
    swap_without_pointers(x, y); 
    printf("After swap (without pointers): x = %d, y = %d\n", x, y);
    return 0;
}