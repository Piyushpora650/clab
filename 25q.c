#include <stdio.h>
int main()
{
    int a, i;
    printf("piyush bora\n");
    printf("enter an integer:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("%d %d\n", i, i * i);
    }
    return 0;
}