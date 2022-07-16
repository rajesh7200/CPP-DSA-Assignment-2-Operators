#include<stdio.h>
int main()
{
    int a,rem=0,sum=0;
    printf("Enter three digit Number :");
    scanf("%d",&a);

    rem=a%10;
    a=a/10;
    sum=sum+rem;

    rem=a%10;
    a=a/10;
    sum=sum+rem;

    rem=a%10;
    a=a/10;
    sum=sum+rem;


    printf("The sum of three digit is :%d",sum);
    return 0;

}
