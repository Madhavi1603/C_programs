// print the below patterns using nested for loop and break:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include<stdio.h>
int main()
{
int i,n=6;
for(i=1;i<=n;i++)
{
int j;
for(j=1;j<=i;j++)
{
printf("%d",j);
}
if(i==5)
break;
printf("\n");
}
}
