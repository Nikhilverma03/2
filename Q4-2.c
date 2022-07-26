//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Values in a and b before swapping is %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("values in a and b after swapping is %d and %d",a,b);
    return 0;
}
