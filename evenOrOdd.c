#include<Stdio.h>
int main()
{
    int num=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Entered Number is Even");
    }
    else
    {
        printf("Entered number is Odd");
    }
    return 0;
}