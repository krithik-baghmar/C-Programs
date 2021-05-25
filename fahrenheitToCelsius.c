/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("The temperature in Celsius is: %.2f",c);
    return 0;
}