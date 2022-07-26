//Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    int d=ch;
    printf("ASCII code of %c is %d",ch,d);
    return 0;
}
