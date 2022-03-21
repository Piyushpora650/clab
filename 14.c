#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, greatest;
    printf("piyush bora");
    printf("\nenter first number=");
    scanf("%d", &a);
    printf("\nenter second number=");
    scanf("%d", &b);
    printf("\nenter third number=");
    scanf("%d", &c);
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("\nthe greatest number is=%d", greatest);
    getch();
}