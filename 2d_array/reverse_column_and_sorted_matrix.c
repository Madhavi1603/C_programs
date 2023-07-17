#include<stdio.h>
int main()
{
int i,j,k;
int size=4, a[size][size],temp;
printf("enter matrix:\n");
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
scanf("%d",&a[i][j]);
}
printf(" reverse the  column matrix:\n");
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
for(k=i+1;k<size;k++)
{
if(a[i][j]>a[k][j])
{
temp=a[i][j];
a[i][j]=a[k][j];
a[k][j]=temp;
}
}
}
}
for(i=0;i<size;i++)
{
for(j=size-1;j>=0;j--)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
}

