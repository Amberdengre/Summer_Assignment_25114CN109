//Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
int main()
{
    int i,n1,n2,temp,r,sum=0;
    printf("Enter the range for which you want to print the Armstrong numbers:");
    scanf("%d %d",&n1,&n2);
    printf("the Armstrong numbers in the given range are:\n");
    for( i=n1;i<=n2;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(i==sum)
        {
            printf("%d ",i);
        }
    }
    
    return 0;
}