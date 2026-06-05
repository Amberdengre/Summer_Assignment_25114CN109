//Write a program to Print prime numbers in a range.
#include <stdio.h>
int main()
{
    int i,n1,n2,t=0;
    printf("Enter the range for which you want to print the prime numbers:");
    scanf("%d %d",&n1,&n2);
    printf("the prime numbers in the given range are:\n");
    for(i=n1;i<=n2;i++)
    {
        t=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                t=1;
                break;
            }
        }
        if(t==0 && i>1)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}