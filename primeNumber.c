#include<stdio.h>
int main()
{
    int i=0,n=0,m=0,temp=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    m = n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Not a Prime Number");
            temp = 1;
            return 0;
        }
    }
    if(temp == 0)
    {
        printf("Number is Prime");
        return 0;
    }
}