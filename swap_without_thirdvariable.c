#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two value :");
    scanf("%d%d",&a,&b);
    printf("Before Swap a=%d and b=%d \n",a,b);
    a=b+a-(b=a);
    printf("After Swap a=%d and b=%d",a,b);
    return 0;
}