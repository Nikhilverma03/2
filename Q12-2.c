//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
int main()
{
    int price;
    float amount;
    printf("Enter price in INR: ");
    scanf("%d",&price);
    amount=price/76.23;
    printf("%f",amount);
    return 0;
}

