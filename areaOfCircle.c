/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    float radius=0,area=0;
    printf("Enter the radius for the circle:");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("The area of circle with radius %.2f is %.2f.",radius,area);
    return 0;
}