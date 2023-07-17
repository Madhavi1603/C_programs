#include<stdio.h>
int main()
{
int i,j,a[5],temp;
printf("enter elements of an array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("elements in ascending order");
for(i=0;i<5;i++)
{
printf("%d\t",a[i]);
}
}
