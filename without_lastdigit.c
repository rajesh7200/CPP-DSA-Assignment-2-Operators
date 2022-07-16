#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Number :");
    scanf("%d",&x);
    y=x/10;
    printf("The given number without its last digit is :%d",y);
    return 0;
}