#include<stdio.h>
int main()
{
    int x;
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    x=a;
    printf("The ASCII code of '%c' is %d",a,x);
    return 0;
}