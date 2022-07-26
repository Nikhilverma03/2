//Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int a,result;
    printf("Enter any number: ");
    scanf("%d",&a);
    result=a&1;
    if(result)
    printf("Number is odd");
    else
    printf("Number is even");
    return 0;
}
