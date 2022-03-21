#include <stdio.h>
int main()
{
    int i, j, line;
    printf("piyush bora\n");
    char ch = 'A';
    printf("Enter the no. of lines:");
    scanf("%d", &line);
    for (i = 1; i <= line; i++)
    {
        for (j = 1; j <= i; j++)
        {
         printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}