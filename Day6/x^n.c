//Write a program to Find x^n without pow().
#include <stdio.h>
int main() {
    double x, result = 1.0;
    int n;

    printf("Enter a number (x): ");
    scanf("%lf", &x);
    printf("Enter an exponent (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    printf("%.2lf raised to the power of %d is: %.2lf\n", x, n, result);

    return 0;
}
