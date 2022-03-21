#include <stdio.h>

int main()
{
    int odd[5], even[5], i, a = -1, b = -1, sum = 0, sum1 = 0;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            even[++a] = i;
        else
            odd[++b] = i;
    }
    printf("\n\tEVEN \tODD");
    for (i = 0; i <= 5; i++)
    {
        printf("\n\t%d \t%d", even[i], odd[i]);
        sum = sum + even[i];
        sum1 = sum1 + odd[i];
      
    }
    printf("%d%d",sum,sum1);

    return 0;
}