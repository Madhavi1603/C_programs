#include<stdio.h>
int main()
{
int n;
int i,j,k;
printf("enter the size");
scanf("%d",&n);
printf("enter elements of array:");
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("after removing duplicates\n");
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
a[k]=a[k+1];
n--;
j--;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
