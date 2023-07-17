#include<stdio.h>
int main()
{
int i,j;
int a[3][3],temp;
printf("enter matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("transpose of given  matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i<j)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
printf(" %d",a[i][j]);
}
printf("\n");
}

}
