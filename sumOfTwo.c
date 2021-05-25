/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=0,sum=0;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    sum = num1+num2;
    printf("The sum of %d and %d is %d.",num1,num2,sum);
    return 0;
}