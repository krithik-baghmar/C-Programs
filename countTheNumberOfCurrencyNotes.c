/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int Rs,a,b,c,d,e,f,g,h;
    printf("Enter the amount: ");
    scanf("%d",&Rs);
    a=Rs/500;
    Rs=Rs%500;
    b=Rs/100;
    Rs=Rs%100;
    c=Rs/50;
    Rs=Rs%50;
    d=Rs/20;
    Rs=Rs%20;
    e=Rs/10;
    Rs=Rs%10;
    f=Rs/5;
    Rs=Rs%5;
    g=Rs/2;
    Rs=Rs%2;
    h=Rs/1;
    printf("The various denominations of the given rupees are\n 500 X %d\n 100 X %d\n 50 X %d\n 20 X %d\n 10 X %d\n 5 X %d\n 2 X %d\n 1 X %d",a,b,c,d,e,f,g,h);
    return 0;
}