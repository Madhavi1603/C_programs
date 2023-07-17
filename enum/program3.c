#include<stdio.h>
enum days{sun=1,mon,tues,wed=10,thu,fri,sat};
int main()
{
enum days d;//the use of enum in c makes the program easy to understand and maintain.
int i;
for(i=sun;i<=sat;i++)
{
printf("%d\t",i);
}
}
