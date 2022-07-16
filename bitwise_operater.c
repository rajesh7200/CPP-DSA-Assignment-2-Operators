//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three-digit number :");
    scanf("%d",&a);
    b=a>>1;
    printf("After rotate the digits(%d) by one position towards the right , The number is %d",a,b);
    return 0;
}
