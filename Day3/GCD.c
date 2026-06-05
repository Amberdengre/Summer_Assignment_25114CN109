//Write a program to Find GCD of two numbers
#include <stdio.h>
int main()
{
    int n1,n2,l1,l2,i,j,hcf=0;
    printf("Enter the two numbers for which you want to find the GCD:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        for(i=1;i<=n1;i++)
        {
            for(j=1;j<=n2;j++)
            {
                if(n1%i==0)
            {
                l1=i;
            }
                if(n1%i==0 && n2%j==0 && i==j)
                {
                    hcf=i;
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
                if(n2%i==0)
            {
                l2=i;
            }
                if(n2%i==0 && n1%j==0 && i==j)
                {
                    hcf=i;
                }
            }
            
        }
    }
    printf("The GCD of %d and %d is %d", n1, n2, hcf);
    return 0;
}