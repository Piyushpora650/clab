#include <stdio.h>
#define E =
void main()
{
    int a, b, c;
#ifdef E
    {
        a E 2;
        b E 3;
        printf("%d\n%d", a, b);
    }
#else
    {
        c = 2;
        printf("%d", c);
    }
#endif
    getche();
}