#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, i;
    double x, degree, sum = 0;

    printf("Enter the value of x in degrees: ");
    scanf("%lf", &degree);
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Convert degrees to radians for calculation
    x = degree * (3.141592653589793 / 180.0);

    for (i = 0; i < n; i++) {
        int pwr = 2 * i + 1;
        double term = pow(x, pwr) / factorial(pwr);
        if (i % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    printf("Sum of the sine series for %.2lf degrees up to %d terms is: %lf\n", degree, n, sum);
    return 0;
}
