//Write a program to Reverse a number. 
#include <stdio.h>
int main()
{
    int n,i,rev=0;
    printf("Enter the number for which you want to find the reverse:");
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
    printf("The reverse of the given number is: %d",rev);
    return 0;
}