//Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

#include<stdio.h>
int main()
{
    int ans,x,a;
    printf("Enter any number: ");
    scanf("%d",&a);
    x=a/10;
    ans=x*10;
    printf("%d",ans);
    return 0;
}
