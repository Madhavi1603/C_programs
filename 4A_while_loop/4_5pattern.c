#include<stdio.h>
int main()
{
int i=1,n=5;
while(i<=n)
{
int j=1;
while(j<=n)
{
if(i+j<=n)
printf(" ");
else
printf(" * ");
j++;
}
printf("\n");
i++;
}
}
