#include<stdio.h>
int main()
{
    int num=0;
    printf("enter a numbur");
    scanf("%d",&num);
    if((num%5==0) && (1num%11==0))
    {
        printf("no is divisible by 5 and 11");

    }
    else
    {
        printf("no is not divisible by 5 and 11");
    }
    return 0;
}
