#include<stdio.h>
int main()
{
int i=1,j=1,n;
printf("enter the  value for n");
scanf("%d",&n);
for(;i<=n;)
{
if((i+j)%2==0)

printf("1");

else 
printf("0");
if(i==j)
{
printf("\n");
i++;
j=1;
}
else
j++;
}
return 0;
}
