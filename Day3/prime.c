//Write a program to Check whether a number is prime or not.
#include <stdio.h>
int main()
{
    int n,i,t=0;
    printf("Enter the number for which you want to check whether it is prime or not:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        printf("the given number is a prime number");
    }
    else
    {
        printf("the given number is not a prime number");
    }
    
    return 0;
}