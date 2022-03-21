#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i;
    printf("piyush bora\n");
    ptr=(int*)calloc(3 * sizeof(int),2);
    for (i = 0; i < 3; i++) 
{
     printf("enter the value no %d of this array\n", i);
     scanf("%d", &ptr[i]);
}
for(i = 0; i < 3; i++)
{
     printf("the value at %d of this array %d\n", i, ptr[i]);
}
free(ptr);
}