/*
Created on Tue May 11 2021

@author: Krithik Jain
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    long int fact;
    printf("Enter the number to get Factorial: ");
    scanf("%d",&n);
    for(i=n,fact=1;i>=1;i--)
    fact = fact * i;
    printf("Fact is %ld", fact);
    getch();
    return 0;
}