//Write a program to Check whether a number is palindrome or not.
#include <stdio.h>
int main()
{
    int n ,i,rev=0,temp;
    printf("Enter the number for which you want to check the palindrome:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;

    }
    if(temp==rev)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("the given number is not a palindrome");

    }
    
    return 0;
}