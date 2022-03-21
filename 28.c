#include<stdio.h>
int main()
{
    int i,num;
    printf("piyush bora\n");
    printf("enter a number:");
    scanf("%d",&num);
    printf("print numbers from %d to 1\n",num);
    i=num;
    while ((i>0))
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}