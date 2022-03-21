#include <stdio.h>
#include<string.h>
 
int main()
{
    char a[100], b;
    puts("piyush bora\n");
    puts("enter the string");
    gets(a);
    b = *a;
    strrev(a);
    if (b == *a)
        puts(" Given string is palindrome.");
    else
        puts("Given string is not palindrome.");
    return 0;
}