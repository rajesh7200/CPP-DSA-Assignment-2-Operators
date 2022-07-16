#include<stdio.h>
int main()
{
    int x;
    x=sizeof(123);
    printf("The size of int is %d",x);

    x=sizeof(float);
    printf("\nThe size of float is %d",x);

    x=sizeof(double);
    printf("\nThe size of double is %d",x);

    x=sizeof(char);
    printf("\nThe size of char is %d",x);

    return 0;
}
