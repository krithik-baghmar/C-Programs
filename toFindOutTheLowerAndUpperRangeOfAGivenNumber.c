/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int n,lower_r,upper_r;
    printf("Enter a number: ");
    scanf("%d",&n);
    lower_r = (n /10) * 10; /*the arithmetic operators work from left to right*/
    upper_r = lower_r + 10;
    printf("Range is %d - %d", lower_r,upper_r);
    return 0;
}