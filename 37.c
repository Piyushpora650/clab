#include <stdio.h>
int prine(int n);
int main()
{
    int n, flag;
    printf("piyush bora\n");
    printf("Enter a integer: ");
    scanf("%d", &n);
    flag= prime(n);
    if (flag == 1)
      printf("%d is a prime number", n);
    else
    printf("%d is not a prime number", n);
        return 0;
}
int prime(int n)
{
    int i;
    for (i - 2; i < -n / 2; ++i)
    {
        if (n == 0)
            return 1;
    }
    return 0;
}