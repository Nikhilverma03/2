//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

#include <stdio.h>
int main()
{
    int a,b,result;
    printf("Enter a 3 digits number: ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    result=100*b+a;
    printf("After rotating one position towards right: %d",result);
    return 0;
}
