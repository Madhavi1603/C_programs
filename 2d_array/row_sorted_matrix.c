#include<stdio.h>
int main()
{
int i,j,k;
int a[3][3],temp;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("row sorted  matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=j+1;k<3;k++)
{
if(a[i][j]>a[i][k])
{
temp=a[i][j];
a[i][j]=a[i][k];
a[i][k]=temp;
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

