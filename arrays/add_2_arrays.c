#include<stdio.h>
int main()
{
int a[5],b[5],c[5];
int i;
printf("enter elements of array a:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("enter elements of array b:");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
printf("sum of array a and b :");
for(i=0;i<5;i++)
{
c[i]=a[i]+b[i];
printf("%d\n",c[i]);
}
}
