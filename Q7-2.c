//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int a,result,count=0;
    printf("Enter any number: ");
    scanf("%d",&a);
    result=a&1;
    count++;
    if(result)
    printf("%d",count);
    a=a>>1;
    result=a&1;
    count++;
    if(result)
    printf("%d",count);
    a=a>>1;
    return 0;
}
