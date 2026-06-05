// Write a program to Find product of digits. 
#include<stdio.h>
int main()
{
    int n,i,prod=1;
    printf("Enter a number for which you want to find the product of digits");
    scanf("%d",&n);
    
    while(n!=0)
    {
    i=n%10;
    prod=prod*i;
    n=n/10;
}
printf("the product of given number =%d",prod);
return 0;
}
