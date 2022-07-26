//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int a,x,sum=0;
    printf("Enter any number: ");
    scanf("%d",&a);
    x=a%10;
    a=a/10;
    sum=sum+x;
    x=a%10;
    a=a/10;
    sum=sum+x;
    x=a%10;
    sum=sum+x;
    printf("Sum of digits of a three digit number is %d",sum);
    return 0;
}
