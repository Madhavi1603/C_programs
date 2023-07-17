#include<stdio.h>
int main()
{
int i,j,k;
int size=4, a[size][size],temp;
printf("enter matrix:\n");
for(i=0;i<size;i++)
for(j=0;j<size;j++)
scanf("%d",&a[i][j]);
printf(" reverse the  row  and sorted matrix:\n");
for(i=0;i<size;i++)
for(j=0;j<size;j++)
for(k=j+1;k<size;k++)
if(a[i][j]>a[i][k])
{
temp=a[i][j];
a[i][j]=a[i][k];
a[i][k]=temp;
}
for(i=size-1;i>=0;i--)
{
for(j=0;j<size;j++)
printf(" %d",a[i][j]);
printf("\n");
}
}


