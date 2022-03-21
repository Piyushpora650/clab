#include<stdio.h>
int main()
{
    printf("piyush bora\n");
    int a,number;
    printf("enter the value of number:");
    scanf("%d",&number);
    do
    {
        printf("%d\n",a+1);
        a++;
    } while (a<number);
    return 0;
    
}