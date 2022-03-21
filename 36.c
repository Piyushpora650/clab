#include<stdio.h>
#include<stdlib.h>
int a,sum;
void main(int);
void main(int a)
{
    sum=sum+a;
    printf("\na=%d sum=%d",a,sum);
    if (a==5)
    exit(0);
    main(++a);
    
    
}