#include <stdio.h>
#include<stdlib.h>
//#include<alloc.h>
int main()
{
int *ptr,i;
ptr=(int *)malloc(3*sizeof(int));
for(i=0;i<3;i++)
{
printf("enter the value no %d of this array\n",i);
scanf("%d",&ptr[i]);
}
for(i=0;i<4;i++)
{
  printf("the value at  %d of this array%d\n",i,&ptr[i]);

}
return 0;
}