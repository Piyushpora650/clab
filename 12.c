#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("piyush bora");
    printf("\nenter your age:");
    scanf("%d",&age);
    if (age>=18)
       printf("\neligible for voting");
     else
       printf("\nnot eligible for voting");
    getch();
}