#include <stdio.h>
#define wait getch()
void main()
{
    int r,
#undef wait() getch();
    wait();
    for (r = 1; r <= 5; r++)
        printf("sqr=%d\n", r);
    wait;
}