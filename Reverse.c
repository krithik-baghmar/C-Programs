#include<stdio.h>
int main()
{
    int num=0,n=0,rev=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    while(num>0)
    {
        n = num%10;
        rev = rev * 10 + n;
        num = num/10;
    }
    printf(" The reverse is %d",rev);
    return 0;
}