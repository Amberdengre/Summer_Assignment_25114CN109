//Write a program to Convert binary to decimal
#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}