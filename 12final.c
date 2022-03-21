#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i,count;
    int start, end;
    printf("piyush bora\n");
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("Armstrong number between %d to %d are: \n", start, end);
    for(i=start; i<=end; i++)
    {
        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;
        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            num = num / 10;
        }
        if(i == sum)
        {
            printf("%d, ", i);
        }
    }
    printf("\nprime no between the range are:");
    for(num = 1;num<=end;num++)
    {
         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
         if(count==0 && num!= 1)
             printf("%d\n ",num);
    }
    return 0;
}