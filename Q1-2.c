//Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter any number: ");
    scanf("%d",&a);
    x=a%10;
    printf("Unit digit of %d is %d",a,x);
    return 0;
}
