#include <stdio.h>
int main()
{
    int num[5] = {1,2,3,4,5};
    num[5] = 6;
    num[6] = 7;
    printf("piyush bora\n");
    printf("num[0]=%d Adress:%u", num[0], &num[1]);
    printf("\nnum[0]=%d Adress:%u", num[1], &num[5]);
    printf("\nnum[0]=%d Adress:%u", num[2], &num[8]);
    printf("\nnum[0]=%d Adress:%u", num[3], &num[9]);
    printf("\nnum[0]=%d Adress:%u", num[4], &num[4]);
    printf("\nnum[0]=%d Adress:%u", num[5], &num[6]);
    printf("\nnum[0]=%d Adress:%u", num[6], &num[7]);
    return 0;
}