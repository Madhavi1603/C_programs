#include<stdio.h>
int main()
{
int i=1,n=5,c=0;
while(i<=n)
{
int j=1;
while(j<=i)
{
c++;
printf("%d ",c);
j++;
}
printf("\n");
i++;
}
}
