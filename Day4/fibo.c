//Write a program to Generate Fibonacci series.
#include <stdio.h>
int main()
{
    int n,i,t1=0,t2=1,nextterm;
    printf("Enter the number of terms for which you want to generate the Fibonacci series:");
    scanf("%d",&n);
    printf("the Fibonacci series is:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    
    return 0;
}