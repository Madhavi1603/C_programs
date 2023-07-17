#include<stdio.h>
int main()
{
int i=5,n=5;
while(i>0)
{
int  j=1;
while(j<=n)
{
if(i+j<=n)
printf(" ");
else
printf("*");
j++;
}
printf("\n");
i--;
}
}

