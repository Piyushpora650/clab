#include<stdio.h>
#include<conio.h>
void main()
{
    int math,TC,C,WT,FCIT,f,g;
    printf("piyush bora");
    printf("\nenter the marks of maths=");
    scanf("%d",&math);
    printf("\nenter the marks of TC=");
    scanf("%d",&TC);
    printf("\nenter the marks of C=");
    scanf("%d",&C);
    printf("\nenter the marks of WT=");
    scanf("%d",&WT);
    printf("\nenter the marks of FCIT=");
    scanf("%d",&FCIT);
    f=math+TC+C+WT+FCIT;
    printf("\n sum=%d",f);
    g=f/5;
    printf("\n percentage=%d",g);
    getch();
}
