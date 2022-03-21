#include <stdio.h>
int main()
{
    int x, y;
    int swap(int, int);
    printf("piyush bora\n");
    printf("enter the value of x and y:");
    scanf("%d %d", &x, &y);
    printf("\nx=%d y=%d", x, y);
    swap(x, y);
    return 0;
}
int swap(int a, int b)
{
    int k;
    k = a;
    a = b;
    b = k;
    printf("\n a-%d b=%d", a, b);
}