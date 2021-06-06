#include<Stdio.h>
int main()
{
    int num=0,rev=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num>0)
    {
        rev = num % 10;
        sum = sum + rev;
        num = num/10;
    }
    printf("Sum of Digits is %d",sum);
    return 0;
}