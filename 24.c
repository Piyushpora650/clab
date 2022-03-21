#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float principle,time,rate,si,ci;
    printf("piyush bora\n");
    printf("enter the principle amount:");
    scanf("%f",&principle);
    printf("enter time in year:");
    scanf("%f",&time);
    printf("enter the rate :");
    scanf("%f",&rate);
    si=(principle*time*rate)/100;
    ci=principle*(pow(1+rate/100,time)-1);
    printf("simple intrest=%0.2f\n",si);
    printf("compound intrest=%0.2f",ci);
    return 0;

}