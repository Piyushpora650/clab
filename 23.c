#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum, avg;
    printf("piyush bora\n");
    printf("Enter the numbers of students: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum= num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
