#include<stdio.h>
int main()
{
    int num=0,n=0,rev=0,original=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    original=num;
    while(num>0)
    {
        n = num%10;
        rev = rev *10 + n;
        num = num/10;
    }
    if(original == rev)
    {
        printf("Number is Palindrome.");
    }
    else
    {
        printf("Number is not Palindrome.");
    }
    return 0;
}