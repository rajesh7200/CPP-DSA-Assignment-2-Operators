#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a Number :");
    scanf("%d",&x);
    i=x%10;
    printf("The unit digit of a given number is :%d",i);
    return 0;
}