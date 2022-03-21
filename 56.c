#include <stdio.h>
int main()
{
    int *p, **q;
    int val[7] = {11,12,13,14,15,16,17};
    p = &val[0];
    q = &p;
    printf("piyush bora\n");
    for (int i = 0; i < 7; i++)
    {
        printf("val[%d]: value is %d\n", i, **q);
        p++;
    }
    return 0;
}




