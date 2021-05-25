/*
Created on Fri May 15 2021

@author: Krithik Jain
*/
#include<stdio.h>
int main()
{
    int hr=0,min=0,sec=0,totalTime=0;
    printf("Enter the time in hr,min,sec:");
    scanf("%d,%d,%d",&hr,&min,&sec);
    totalTime = hr*60*60 + min*60 + sec;
    printf("The total time in seconds is: %d",totalTime);
}