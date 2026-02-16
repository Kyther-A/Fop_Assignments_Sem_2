#include<stdio.h>

int main(){
    int n, f, l, j, loop;
    printf("Enter first in range: ");
    scanf("%d", &f);
    printf("Enter last in range: ");
    scanf("%d", &l);
    printf("Enter number of tables: ");
    scanf("%d", &j);
    for(loop = 1; loop <= j; loop++){
        for(n = f; n <= l; n++){
            printf("%d x %d = %d\t", n, loop, n * loop);
        }
        printf("\n");
    }
    return 0;
}
