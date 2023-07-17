#include<stdio.h>
int main()
{
int i,j,k;
int  a[3][3],temp;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf(" reverse the  column matrix:\n");
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
for(k=i+1;k<4;k++)
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
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf(" %d",a[i][j]);
}
printf("\n");
}
}

