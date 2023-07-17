#include<stdio.h>
int main()
{
int stud[4][2];
int i,j;
printf("enter roll.no and marks:\n");
for(i=0;i<4;i++)
{
scanf("%d%d",&stud[i][0],&stud[i][1]);
}
for(i=0;i<4;i++)
printf("%d-%d\n",stud[i][0],stud[i][1]);
}
