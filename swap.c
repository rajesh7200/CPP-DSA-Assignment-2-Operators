#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two nubers :");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap the value a=%d and b=%d",a,b);
    return 0;

}
