#include<stdio.h>
int main(int argc,int *argv[])
{
int i,n,sum=0;
for(i=1;i<argc;i++)
{
sscanf(argv[i],"%d",&n);
sum=sum+n;
}
printf("sum of all given num:%d",sum);
}
