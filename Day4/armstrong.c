//Write a program to Check Armstrong number. 
#include <stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("Enter the number for which you want to check whether it is an Armstrong number or not:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("the given number is an Armstrong number");
    }
    else
    {
        printf("the given number is not an Armstrong number");
    }
    
    return 0;
}