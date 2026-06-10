//Write a program to Recursive Fibonacci. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int fibonacci(int num) {
        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
    
    printf("Fibonacci of %d is: %d\n", n, fibonacci(n));
    
    return 0;
}