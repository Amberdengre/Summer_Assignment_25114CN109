//Write a program to Recursive sum of digits.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int sumOfDigits(int num) {
        if (num == 0) {
            return 0;
        }
        return (num % 10) + sumOfDigits(num / 10);
    }
    
    printf("Sum of digits of %d is: %d\n", n, sumOfDigits(n));
    
    return 0;
}