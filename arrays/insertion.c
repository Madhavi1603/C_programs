#include<stdio.h>
#define SIZE 6
int main()
{
int a[SIZE];
int i,element,index;
printf("enter elements of the array:\n");
for(i=0;i<SIZE-1;i++)
scanf("%d",&a[i]);
printf("enter the element to be inserted:\n");
scanf("%d",&element);
printf("enter the index where element to be inserted:\n");
scanf("%d",&index);
for(i=SIZE-2;i>=index;i--)
a[i+1]=a[i];
a[i+1]=element;
for(i=0;i<SIZE;i++)
printf("%d\t",a[i]);
}
