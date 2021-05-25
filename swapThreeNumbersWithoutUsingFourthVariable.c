/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=0,num3=0;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    num1 = num1+num2+num3;
    num2 = num1-num2-num3;
    num3 = num1-num2-num3;
    num1 = num1-num2-num3;
    printf("Numbers after swapping are:\n");
    printf("First number: %d\nSecond number: %d\nThird number: %d",num1,num2,num3);
    return 0;
}