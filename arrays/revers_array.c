#include<stdio.h>
int main()
{
int a[10],b[10];
int i,j,temp;
printf("enter the elements of a: ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the reversed  elements:");
for(i=9,j=0;i>=0;i--,j++)
{
b[j]=a[i];
printf("%d\t",b[j]);
}
}

