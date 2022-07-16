#include<stdio.h>
int main()
{
    int num,result=0;
    printf("Enter a Number :");
    scanf("%d",&num);

    result=num&1;
    if(result==1)
        printf("%d is odd number",num);
    else
         printf("%d is even number",num);

    return 0;

}
