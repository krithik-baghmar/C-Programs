/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int num1=0,num2=0,temp=0;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Numbers after swapping are:\n");
    printf("First number: %d\nSecond number: %d",num1,num2);
    return 0;
}