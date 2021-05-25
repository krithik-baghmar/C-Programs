/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=0,rem=0,n=0,m=0;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    m=num1;
    n=num2;
    if(num1>num2)
    {
        while(num1>num2)
        {
            num1=num1-num2;
            rem=num1;
        }
    }
    else
    {
        while(num2>num1)
        {
            num2=num2-num1;
            rem=num2;
        }
    }
    printf("The remainder of %d and %d is %d.",m,n,rem);
    return 0;
}
