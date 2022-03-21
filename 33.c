#include <stdio.h>

int sum();
void main()
{
    printf("piyush bora\n");
    float area;
    printf("To calculate the area of the square\n");
    area = square();
    printf("The area of the square: %2f\n", area);
}
int square()
{
  float side;
  printf("Enter the length : ");
  scanf("%2f", &side);
   return side * side;
}