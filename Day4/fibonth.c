//Write a program to Find nth Fibonacci term. 
#include <stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nextterm;
    printf("Enter the term for which you want to find the Fibonacci term:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    printf("the %dth term in the Fibonacci series is: %d",n,t1);
    
    return 0;
}