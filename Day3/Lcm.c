//Write a program to Find LCM of two numbers. 
#include <stdio.h>
int main()
{
    int i,j, n1,n2,l1,l2,lcm=0;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    if(n1>n2)
    {
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            if(n1%i==0 && n2%j==0)
            {
                l1=i;
                l2=j;
                if(l1==l2)
                {
                    lcm=(n1*n2)/l1;
                }
            }
        }
    }
    }
    else
    {
        for(i=1;i<=n2;i++)
    {
        for(j=1;j<=n1;j++)
        {
            if(n2%i==0 && n1%j==0)
            {
                l1=i;
                l2=j;
                if(l1==l2)
                {
                    lcm=(n1*n2)/l1;
                }
            }
        }
    }
    }
    printf("LCM of %d and %d is: %d", n1, n2, lcm);
    return 0;
}