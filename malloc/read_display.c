#include<stdio.h>
#include<stdlib.h>
int main()
{
int size,i,*array;
printf("size of array\n");
scanf("%d",&size);
array=(int*)malloc(size*sizeof(int));
printf("enter the values of array\n");
for(i=0;i<size;i++)
scanf("%d",&array[i]);
printf("the values in the array are :\n");
for(i=0;i<size;i++)
{
printf("%d\n",array[i]);
}
}
