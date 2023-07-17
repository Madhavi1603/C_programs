#include<stdio.h>
int main()
{
int a[3][3];
int i,j,b;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf(" squares of given  matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
b=a[i][j]*a[i][j];
printf(" %d",b);
}
printf("\n");
}
}

