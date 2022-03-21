#include <stdio.h>
#include <string.h>

int main()
{
    char a[5]="hello";
    char b[3]="hey";
    char c[10];
    strcpy(c, strcat(a, b));
    puts(c);
}