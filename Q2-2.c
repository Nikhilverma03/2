//Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter any number: ");
    scanf("%d",&a);
    x=a/10;
    printf("%d without its last digit is %d",a,x);
    return 0;
}
