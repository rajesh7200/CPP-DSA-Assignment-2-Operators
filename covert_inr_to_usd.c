#include<stdio.h>
int main()
{
    float inr,usd,amount;
    printf("Enter the amount in INR to convert USD :");
    scanf("%f",&amount);
    usd=amount/76.23;               // Assume price of 1 USD is INR 76.23.
   // inr=amount*76.23;
    printf("In USD the amount is %f USD",usd);
   // printf("In INR the amount is %f INR",inr);
    return 0;
}
