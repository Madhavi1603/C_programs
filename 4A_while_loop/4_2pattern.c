#include<stdio.h>
int main()
{
int i=1,n=5;
while(i<=n)
{
int j=1;
while(j<=n+1-i)
{
printf("*");
j++;
}
printf("\n");
i++;
}
}
