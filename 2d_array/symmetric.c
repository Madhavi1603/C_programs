#include<stdio.h>
int main()
{
int i,j;
int a[3][3],count=0;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
//printf("given matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i<j)
{
if(a[i][j]!=a[j][i])
{
count++;
}
}
}
}
if(count!=0)
{
printf("given matrix is not  symmetric");
}
else
{
printf("given matrix is symmetric");
}
}









