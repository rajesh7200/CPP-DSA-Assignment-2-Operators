#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter a Number :");
    scanf("%d",&x);
    y=x%10;
    z=x-y;
    printf("Input x=%d and result is x=%d",x,z);  //make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

    return 0;
}
