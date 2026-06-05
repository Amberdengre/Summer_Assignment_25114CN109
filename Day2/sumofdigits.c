//Write a program to Find sum of digits of a number.
#include <stdio.h>
int main()
{
    int n ,i ,sum=0;
    printf("Enter a number for which you want to find the sum of digits");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("the sum of digit in %d is : %d",n,sum);
    return 0;
}