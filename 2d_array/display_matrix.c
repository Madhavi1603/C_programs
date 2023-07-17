#include<stdio.h>
int main()
{
int m[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
int i,j;
for(i=0;i<3;i++)
{
//printf("\n");
for(j=0;j<4;j++)
{
printf("  %d",m[i][j]);
}
printf("\n");
}
}
