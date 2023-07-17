#include<stdio.h>
int main()
{
int n, a[n];
int i,temp;
printf("enter size of array:");
scanf("%d",&n);
printf("enter an array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("exchange adjacent elements of an array:");
for(i=0;i<n;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}

