//Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Values in a and b before swapping is %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("values in a and b after swapping is %d and %d",a,b);
    return 0;
}
