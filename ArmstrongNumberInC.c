#include<stdio.h>
int main()
{
    int num=0,sum=0,rev=0,temp=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    temp = num;
    while(num>0)
    {
        rev = num % 10;
        sum = sum + (rev * rev * rev);
        num = num / 10;
    }
    if(sum == temp)
    {
        printf("Number is Armstrong Number");
    }
    else
    {
        printf("Number is Not a Armstrong Number");
    }
    return 0;
}