#include<stdio.h>
int main()
{
int i=1,n=5;
while(i<=n)
{
int j=1;
while(j<=i)
{
printf("%d",n+1-j);
j++;
}
printf("\n");
i++;
}
}
