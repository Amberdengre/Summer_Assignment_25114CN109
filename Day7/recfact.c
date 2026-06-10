//Write a program to Recursive factorial.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int factorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        }
        return num * factorial(num - 1);
    }
    
    printf("Factorial of %d is: %d\n", n, factorial(n));
    
    return 0;
}