#include <stdio.h>
int main()
{
    int a, rev, remainder;
    printf("piyush bora\n");
    printf("enter an integer:");
    scanf("%d", &a);
    while (a != 0)
    {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a /= 10;
    }
    printf("reversed number=%d", rev);
    return 0;
}