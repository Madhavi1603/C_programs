#include<stdio.h>
int main()
{
int i=1,n=5,j=0;
while(j<=n)
{
if(i==j)
{
printf("\n");
j++;
j=0;
}
else
{
printf("*");
}
i++;
}
}
