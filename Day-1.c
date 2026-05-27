// Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number upto which you want to find the sum: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of %d natural numbers is %d",n,sum);
    return 0;
}

// Write a program to Print multiplication table of a given number.
#include <stdio.h>
int main()
{
    int i,n,table=1;
    printf("Enter the number for which you want to print the multiplication table: ");
    scanf("%d",&n);
    printf("multiplication of numbers:\n");
    for(i=1;i<=10;i++)
    {
        table=n*i;
        printf("%d * %d = %d\n",n,i,table);
    }
    return 0;
}

//Write a program to Find factorial of a number.
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the number for which you want to find the factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    
    }
    printf("the factorial of %d is: %d",n,f);
    return 0;

}

//Write a program to Count digits in a number.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number for which you want to count the digits:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the number of digits in the given number is: %d",count);
    return 0;
}