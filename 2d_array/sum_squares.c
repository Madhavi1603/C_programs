#include<stdio.h>
int main()
{
int a[3][3];
int i,j,sum=0;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("sum of squares of given  matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum=sum+a[i][j]*a[i][j];
}
}
printf("%d",sum);
//printf("\n");
}

